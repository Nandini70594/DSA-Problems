# Floyd–Warshall Algorithm (All-Pairs Shortest Path)

## Problem Statement

Given a weighted directed graph with `V` vertices represented as an adjacency matrix, find the shortest distances between **every pair of vertices**.

The graph may contain negative edge weights but **must not contain any negative weight cycles**.

If there is no direct edge between two vertices, its weight is represented as **INF (infinity)**.

---

## Input

- An integer `V` representing the number of vertices.
- A `V × V` adjacency matrix `graph[][]`, where:
  - `graph[i][j]` is the weight of the edge from vertex `i` to vertex `j`.
  - `graph[i][j] = 0` if `i == j`.
  - `graph[i][j] = INF` if there is no direct edge.

---

## Output

Print the shortest distance matrix such that `dist[i][j]` represents the minimum distance from vertex `i` to vertex `j`.

---

## Example

### Input

```text
V = 4

      0    5   INF   10
    INF    0     3  INF
    INF  INF     0     1
    INF  INF   INF     0
```

### Output

```text
      0    5    8    9
    INF    0    3    4
    INF  INF    0    1
    INF  INF  INF    0
```

---

## Explanation

- Shortest path from **0 → 2**:
  - 0 → 1 → 2
  - Cost = 5 + 3 = **8**

- Shortest path from **0 → 3**:
  - 0 → 1 → 2 → 3
  - Cost = 5 + 3 + 1 = **9**
  - This is shorter than the direct edge with cost **10**.

---

## Constraints

- `1 ≤ V ≤ 100`
- Edge weights may be positive, zero, or negative.
- The graph should **not contain any negative weight cycle**.