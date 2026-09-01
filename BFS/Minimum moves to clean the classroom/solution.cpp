class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {

        int m = classroom.size();
        int n = classroom[0].size();

        int sx, sy;
        int litterCount = 0;

        // litterId[i][j] stores the ID of litter at (i,j)
        // -1 means this cell is not a litter cell
        vector<vector<int>> litterId(m, vector<int>(n, -1));

        // Find S, count L, and assign IDs to L
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (classroom[i][j] == 'S') {
                    sx = i;
                    sy = j;
                }
                else if (classroom[i][j] == 'L') {
                    litterId[i][j] = litterCount;
                    litterCount++;
                }
            }
        }

        // All litters collected
        if (litterCount == 0)
            return 0;

        // Example: 3 litters -> 111
        int fullMask = (1 << litterCount) - 1;

        // bestEnergy[x][y][mask]
        // Maximum energy with which we have reached
        // (x, y) after collecting the litters in mask.
        vector<vector<vector<int>>> bestEnergy(
            m,
            vector<vector<int>>(
                n,
                vector<int>(1 << litterCount, -1)
            )
        );

        struct State {
            int x;
            int y;
            int mask;
            int e;
            int steps;
        };

        queue<State> q;

        // Starting state
        q.push({sx, sy, 0, energy, 0});
        bestEnergy[sx][sy][0] = energy;

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        while (!q.empty()) {

            State cur = q.front();
            q.pop();

            int x = cur.x;
            int y = cur.y;
            int mask = cur.mask;
            int e = cur.e;
            int steps = cur.steps;

            // Try all 4 directions
            for (int d = 0; d < 4; d++) {

                int nx = x + dx[d];
                int ny = y + dy[d];

                // Outside grid
                if (nx < 0 || nx >= m || ny < 0 || ny >= n)
                    continue;

                // Obstacle
                if (classroom[nx][ny] == 'X')
                    continue;

                // No energy to make this move
                if (e == 0)
                    continue;

                int newEnergy = e - 1;
                int newMask = mask;

                // Collect litter
                if (classroom[nx][ny] == 'L') {
                    newMask |= (1 << litterId[nx][ny]);
                }

                // Reset energy
                if (classroom[nx][ny] == 'R') {
                    newEnergy = energy;
                }

                int newSteps = steps + 1;

                // All litter collected
                if (newMask == fullMask)
                    return newSteps;

                // Pruning
                if (newEnergy <= bestEnergy[nx][ny][newMask])
                    continue;

                bestEnergy[nx][ny][newMask] = newEnergy;

                q.push({
                    nx,
                    ny,
                    newMask,
                    newEnergy,
                    newSteps
                });
            }
        }
        return -1;
    }
};