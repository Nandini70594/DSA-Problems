#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

class Graph{
public:
    vector<vector<int>> adj;
    int V;
    int time;
    vector<int> dt, low;

    Graph(int V){
        this->V = V;
        adj.resize(V);
    }

    // Add an undirected edge
    void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void dfs(int u, int parU, set<int> &cp){
        // Assign discovery time and low value
        dt[u] = low[u] = time++;
        int children = 0;

        // Traverse all adjacent vertices
        for(int i = 0; i < adj[u].size(); i++){
            int v = adj[u][i];

            // If the vertex is unvisited
            if(dt[v] == -1){
                children++;

                dfs(v, u, cp);

                // Update low value after DFS
                low[u] = min(low[u], low[v]);

                // Non-root articulation point condition
                if(parU != -1 && low[v] >= dt[u]){
                    cp.insert(u);
                }
            }
            // Back edge found
            else if(v != parU){
                low[u] = min(low[u], dt[v]);
            }
        }

        // Root articulation point condition
        if(parU == -1 && children > 1){
            cp.insert(u);
        }
    }

    int articulationPoints(){
        time = 0;
        dt.resize(V, -1);
        low.resize(V);

        set<int> criticalPoints;

        // Run DFS for every connected component
        for(int i = 0; i < V; i++){
            if(dt[i] == -1){
                dfs(i, -1, criticalPoints);
            }
        }

        return criticalPoints.size();
    }
};

int main(){
    Graph graph(6);

    graph.addEdge(1, 0);
    graph.addEdge(1, 2);
    graph.addEdge(4, 3);
    graph.addEdge(4, 5);
    graph.addEdge(4, 1);

    cout << "Articulation Points: " << graph.articulationPoints() << endl;

    return 0;
}