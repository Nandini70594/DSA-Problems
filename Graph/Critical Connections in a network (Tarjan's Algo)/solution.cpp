class Solution {
public:
    int time;                   // Global timer for DFS traversal
    vector<int> dt, low;        // dt = Discovery Time, low = Lowest reachable discovery time

    void dfs(int u, int parU, vector<vector<int>> &adj, vector<vector<int>> &cc) {

        // Assign discovery time and initialize low value
        dt[u] = low[u] = ++time;

        // Traverse all adjacent vertices
        for (int i = 0; i < adj[u].size(); i++) {

            int v = adj[u][i];

            // If the node is unvisited, perform DFS
            if (dt[v] == -1) {

                dfs(v, u, adj, cc);

                // Update the lowest reachable node from u
                low[u] = min(low[u], low[v]);

                // If v cannot reach an ancestor of u,
                // then edge (u, v) is a bridge
                if (low[v] > dt[u]) {
                    cc.push_back({u, v});
                }
            }

            // Back edge found (ignore the parent edge)
            else if (v != parU) {

                // Update low[u] using discovery time of ancestor
                low[u] = min(low[u], dt[v]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {

        // Build adjacency list
        vector<vector<int>> adj(n);

        for (int i = 0; i < connections.size(); i++) {
            int u = connections[i][0];
            int v = connections[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        time = 0;

        // Initialize discovery time as -1 (unvisited)
        dt.resize(n, -1);

        // Initialize low array
        low.resize(n);

        vector<vector<int>> bridges;

        // Handle disconnected components
        for (int i = 0; i < n; i++) {

            if (dt[i] == -1) {
                dfs(i, -1, adj, bridges);
            }
        }

        return bridges;
    }
};
