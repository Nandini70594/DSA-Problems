# Approach

## Intuition

A connected component is considered **complete** if every pair of vertices within that component is directly connected by an edge.

Instead of checking every pair of vertices individually, we use a mathematical property:

For a component containing **k** vertices, the number of edges in a complete graph is:

\[
\frac{k \times (k - 1)}{2}
\]

Therefore, for every connected component:

1. Count the number of vertices.
2. Count the number of edges.
3. Compare the actual number of edges with the expected number of edges for a complete graph.

If they are equal, the component is complete.

---

## Algorithm

1. Build the graph using an adjacency list.
2. Maintain a visited array.
3. Traverse every unvisited vertex using DFS.
4. During DFS:
   - Count the number of vertices in the current component.
   - Add the degree of every visited vertex.
5. Since each undirected edge is counted twice, divide the total edge count by 2.
6. Check whether:

```text
edges == nodes × (nodes − 1) / 2
```

7. If true, increment the answer.
8. Return the total number of complete components.

---

## Dry Run

### Input

```text
n = 6

edges =
[
 [0,1],
 [0,2],
 [1,2],
 [3,4]
]
```

### Graph

```text
0 ----- 1
 \     /
   \ /
    2

3 ----- 4

5
```

### Component 1

Vertices:

```text
0,1,2
```

Number of vertices:

```text
3
```

Degrees:

```text
2 + 2 + 2 = 6
```

Actual edges:

```text
6 / 2 = 3
```

Expected edges:

```text
3 × (3 − 1) / 2 = 3
```

Complete ✔

---

### Component 2

Vertices:

```text
3,4
```

Nodes:

```text
2
```

Edges:

```text
1
```

Expected:

```text
2 × (2 − 1) / 2 = 1
```

Complete ✔

---

### Component 3

Vertex:

```text
5
```

Nodes:

```text
1
```

Edges:

```text
0
```

Expected:

```text
1 × (1 − 1) / 2 = 0
```

Complete ✔

Answer:

```text
3
```

---

## Why Divide Edge Count by 2?

In an undirected graph, each edge appears in the adjacency list of both endpoints.

Example:

```text
0 ----- 1
 \     /
   \ /
    2
```

Adjacency List:

```text
0 → 1,2
1 → 0,2
2 → 0,1
```

Total degree count:

```text
2 + 2 + 2 = 6
```

However, the graph actually has only:

```text
(0,1)
(0,2)
(1,2)
```

which is **3** edges.

Hence,

```text
Actual Edges = Degree Sum / 2
```

---

## Complexity Analysis

### Time Complexity

- Building the graph: **O(E)**
- DFS traversal: **O(V + E)**

Overall:

```text
O(V + E)
```

---

### Space Complexity

- Adjacency list: **O(V + E)**
- Visited array: **O(V)**
- DFS recursion stack: **O(V)**

Overall:

```text
O(V + E)
```