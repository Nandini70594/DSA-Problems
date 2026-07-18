# Articulation Points using Tarjan's Algorithm (DFS)

## Problem

Given an undirected graph, find the number of **articulation points** (also called **cut vertices**).

An articulation point is a vertex whose removal increases the number of connected components in the graph.

---

## Approach

We use **Tarjan's Algorithm** based on **Depth First Search (DFS)**.

### Key Idea

For every vertex, maintain two values:

- **Discovery Time (`dt`)**  
  The time at which the vertex is first visited during DFS.

- **Lowest Reachable Time (`low`)**  
  The earliest discovery time reachable from that vertex using DFS tree edges and at most one back edge.

During DFS:

1. Mark the current node as visited by assigning its discovery time and low value.
2. Visit every unvisited neighbour recursively.
3. After returning from DFS, update the current node's low value.
4. A node is an articulation point if:
   - It is **not the root** and one of its children cannot reach any ancestor of the current node.
     ```
     low[child] >= dt[current]
     ```
   - It is the **root** of the DFS tree and has more than one child.

A `set` is used to store articulation points to avoid duplicates.

---

## Algorithm

1. Build the adjacency list.
2. Initialize discovery time and low arrays.
3. Run DFS for every unvisited vertex.
4. Compute low values while backtracking.
5. Check articulation point conditions.
6. Return the total number of articulation points.

---

## Time Complexity

- **O(V + E)**

where:

- **V** = Number of vertices
- **E** = Number of edges

---

## Space Complexity

- **O(V + E)**

Extra space is used for:
- Adjacency list
- Discovery time array
- Low array
- Recursion stack
- Set of articulation points

