# Approach: Tarjan's Algorithm (Bridge Finding using DFS)

## Intuition

A critical connection (bridge) is an edge whose removal disconnects the graph.

Instead of removing every edge and checking connectivity (which is too slow), we use **Tarjan's Algorithm** to identify all bridges in a single DFS traversal.

The algorithm uses two arrays:

- **Discovery Time (`dt`)**
  - Stores the time when a node is first visited.

- **Lowest Reachable Time (`low`)**
  - Stores the earliest discovery time reachable from the current node using:
    - Tree edges
    - Back edges

---

## Key Observation

While exploring an edge `(u, v)`:

- If

```text
low[v] > dt[u]
```

then there is **no back edge** from `v` or its descendants to `u` or any ancestor of `u`.

Therefore, removing edge `(u, v)` disconnects the graph.

Hence,

```text
(u, v) is a bridge.
```

---

## Algorithm

1. Build an adjacency list.
2. Initialize:
   - `dt[] = -1`
   - `low[]`
   - `time = 0`
3. Perform DFS from every unvisited node.
4. For every adjacent node:
   - Ignore the parent.
   - If unvisited:
     - Perform DFS.
     - Update:

```text
low[u] = min(low[u], low[v])
```

     - If

```text
low[v] > dt[u]
```

then store `(u, v)` as a bridge.

5. If already visited and not the parent:

```text
low[u] = min(low[u], dt[v])
```

6. Return all bridges.

---

## Dry Run

### Graph

```text
      0
     / \
    1---2
    |
    3
```

### DFS Order

```text
0 → 1 → 2
```

Node `2` has a back edge to `0`.

So,

```text
low[2] = dt[0]
```

Then,

```text
low[1] = min(low[1], low[2])
```

Now visit node `3`.

Node `3` has no back edge.

Therefore,

```text
low[3] = dt[3]
```

Since

```text
low[3] > dt[1]
```

edge

```text
(1,3)
```

is a bridge.

---

## Why It Works

For every DFS tree edge `(u, v)`:

- If `v` can reach an ancestor of `u` through a back edge, then

```text
low[v] <= dt[u]
```

Removing `(u, v)` does **not** disconnect the graph.

Otherwise,

```text
low[v] > dt[u]
```

which means the only way to reach `v` is through `u`.

Hence, `(u, v)` is a critical connection.

---

## Complexity Analysis

### Time Complexity

Building adjacency list:

```text
O(V + E)
```

DFS traversal:

```text
O(V + E)
```

Overall:

```text
O(V + E)
```

where

- `V` = Number of vertices
- `E` = Number of edges

---

### Space Complexity

Adjacency List:

```text
O(V + E)
```

Discovery Time array:

```text
O(V)
```

Low array:

```text
O(V)
```

DFS recursion stack:

```text
O(V)
```

Overall:

```text
O(V + E)
```

---

## Topics

- Graph
- Depth First Search (DFS)
- Tarjan's Algorithm
- Bridges in Graph
- Low Link Values
