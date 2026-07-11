# 2685. Count the Number of Complete Components

## Problem Statement

You are given an integer `n`. There is an undirected graph with `n` vertices, numbered from `0` to `n - 1`. You are also given a 2D integer array `edges` where `edges[i] = [ai, bi]` denotes that there exists an undirected edge connecting vertices `ai` and `bi`.

Return the number of **complete connected components** of the graph.

A **connected component** is a subgraph of a graph in which there exists a path between any two vertices, and no vertex of the subgraph shares an edge with a vertex outside of the subgraph.

A connected component is said to be **complete** if there exists an edge between every pair of its vertices.

---

## Example 1

**Input**

```text
n = 6
edges = [[0,1],[0,2],[1,2],[3,4]]
```

**Output**

```text
3
```

**Explanation**

The graph contains three connected components:

- {0,1,2} → Complete
- {3,4} → Complete
- {5} → Complete (A single vertex is considered a complete graph)

Hence, the answer is **3**.

---

## Example 2

**Input**

```text
n = 6
edges = [[0,1],[0,2],[1,2],[3,4],[3,5]]
```

**Output**

```text
1
```

**Explanation**

The connected components are:

- {0,1,2} → Complete
- {3,4,5} → Not complete (Missing edge between 4 and 5)

Hence, the answer is **1**.

---

## Constraints

- `1 <= n <= 50`
- `0 <= edges.length <= n * (n - 1) / 2`
- `edges[i].length == 2`
- `0 <= ai, bi < n`
- `ai != bi`
- There are no repeated edges.