# Floyd–Warshall Algorithm (All-Pairs Shortest Path)

## Approach

### Intuition

The Floyd–Warshall algorithm is a **Dynamic Programming** algorithm used to find the shortest distance between **every pair of vertices** in a weighted graph.

Instead of finding the shortest path from a single source, it computes the shortest paths for **all possible source-destination pairs**.

The main idea is to check whether using an intermediate vertex can provide a shorter path between two vertices.

---

## Idea

Initially, the shortest distance between two vertices is:

- `0` if both vertices are the same.
- Edge weight if a direct edge exists.
- `INF` if there is no direct edge.

Then, one by one, every vertex is considered as an **intermediate vertex**.

For every pair `(i, j)`, we check whether the path

```text
i → k → j
```

is shorter than the current path

```text
i → j
```

If it is shorter, we update the distance.

This process is repeated for every vertex until all shortest paths are computed.

---

## Algorithm

1. Create a distance matrix `dist[][]`.
2. Initialize every distance to `INF`.
3. Set `dist[i][i] = 0` for all vertices.
4. Copy all edge weights into the distance matrix.
5. For every vertex `k`:
   - Treat `k` as an intermediate vertex.
   - For every pair of vertices `(i, j)`:
     - If both `i → k` and `k → j` are reachable,
       update

       ```text
       dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])
       ```
6. Print the final shortest distance matrix.
7. Check the diagonal of the matrix:
   - If any `dist[i][i] < 0`, the graph contains a **negative weight cycle**.

---

## Dry Run

Consider the graph:

```text
0 --4--> 1
0 --11-> 2
1 --2--> 2
1 --8--> 3
2 --3--> 3
```

### Initial Distance Matrix

```text
      0    4   11  INF
    INF    0    2    8
    INF  INF    0    3
    INF  INF  INF    0
```

### Using vertex 1 as intermediate

For path:

```text
0 → 2
```

Current distance:

```text
11
```

Alternative path:

```text
0 → 1 → 2

4 + 2 = 6
```

Since

```text
6 < 11
```

Update

```text
dist[0][2] = 6
```

---

### Using vertex 2 as intermediate

For path

```text
0 → 3
```

Current distance:

```text
12
```

Alternative path

```text
0 → 2 → 3

6 + 3 = 9
```

Update

```text
dist[0][3] = 9
```

---

### Final Distance Matrix

```text
0   4   6   9
INF 0   2   5
INF INF 0   3
INF INF INF 0
```

---

## Negative Weight Cycle Detection

After completing the algorithm, check:

```cpp
dist[i][i]
```

If any diagonal element becomes negative,

```text
dist[i][i] < 0
```

then the graph contains a **negative weight cycle** because a vertex can reach itself with a negative total cost.

---

## Complexity Analysis

| Operation | Complexity |
|-----------|------------|
| Initializing distance matrix | O(V²) |
| Floyd–Warshall computation | O(V³) |
| Printing result | O(V²) |
| Negative cycle detection | O(V) |

### Overall Time Complexity

```text
O(V³)
```

### Space Complexity

```text
O(V²)
```

---


## Key Observation

At each iteration, one additional vertex is allowed to be used as an intermediate vertex. By the end of the algorithm, every possible intermediate vertex has been considered, ensuring that the shortest distance between every pair of vertices has been found.