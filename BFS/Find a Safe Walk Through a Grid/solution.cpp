class Solution {
public:

    bool dfs(int r, int c,
             int m, int n,
             int health,
             vector<vector<int>>& grid,
             vector<vector<int>>& best)
    {
        // out of bounds
        if(r < 0 || c < 0 || r >= m || c >= n)
            return false;

        // lose health on unsafe cell
        if(grid[r][c] == 1)
            health--;

        // health exhausted
        if(health <= 0)
            return false;

        // destination reached
        if(r == m-1 && c == n-1)
            return true;

        // already visited with better or equal health
        if(best[r][c] >= health)
            return false;

        // store best health
        best[r][c] = health;

        // explore 4 directions
        if(dfs(r+1, c, m, n, health, grid, best))
            return true;

        if(dfs(r-1, c, m, n, health, grid, best))
            return true;

        if(dfs(r, c+1, m, n, health, grid, best))
            return true;

        if(dfs(r, c-1, m, n, health, grid, best))
            return true;

        return false;
    }

    bool findSafeWalk(vector<vector<int>>& grid, int health) {

        int m = grid.size();
        int n = grid[0].size();

        // stores maximum health seen at each cell
        vector<vector<int>> best(m, vector<int>(n, -1));

        return dfs(0, 0, m, n, health, grid, best);
    }
};