class Solution {
public:
    vector<vector<int>> adj;
    vector<bool> visited;
    int nodes;
    int edgeCount;

    void dfs(int node){
        visited[node] = true;
        nodes++;

        edgeCount += adj[node].size();

        for(int neigh : adj[node]){
            if(!visited[neigh]){
                dfs(neigh);
            }
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        adj.resize(n);
        visited.resize(n, false);

        // Build graph
        for(auto &edge : edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int completeComponents = 0;

        // Process each component
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                nodes = 0;
                edgeCount = 0;

                dfs(i);

                edgeCount /= 2;

                if(edgeCount == nodes * (nodes - 1) / 2){
                    completeComponents++;
                }
            }
        }

        return completeComponents;
    }
};