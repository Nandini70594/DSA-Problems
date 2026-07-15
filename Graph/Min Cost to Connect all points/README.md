# Approach - Prim's Algorithm (Minimum Spanning Tree)

## Intuition

Each point can be treated as a node in a graph.

- Every pair of points forms an edge.
- The edge weight is the Manhattan distance between them.

Since we need to connect all points with the **minimum total cost** without creating cycles, the problem becomes finding the **Minimum Spanning Tree (MST)**.

Prim's Algorithm efficiently builds the MST by repeatedly choosing the minimum-cost edge that connects a new node.

---

## Algorithm

1. Start from any point (here, point `0`).
2. Push `{0, 0}` into a min-heap.
3. While the priority queue is not empty:
   - Remove the edge with the minimum cost.
   - If the node is already included in the MST, skip it.
   - Otherwise:
     - Add its cost to the answer.
     - Mark it as visited.
     - Calculate the Manhattan distance from the current node to every unvisited node.
     - Push those edges into the priority queue.
4. Continue until all nodes are included.
5. Return the total MST cost.

---

## Dry Run

Input:

points = [[0,0],[2,2],[3,10],[5,2],[7,0]]

Start from point 0.

Priority Queue:

(0,0)

Take node 0.

Cost = 0

Push edges:

- 0 → 1 = 4
- 0 → 2 = 13
- 0 → 3 = 7
- 0 → 4 = 7

Choose minimum edge:

0 → 1 (4)

Cost = 4

Add edges from node 1.

Next minimum:

1 → 3 (3)

Cost = 7

Add edges from node 3.

Next minimum:

3 → 4 (4)

Cost = 11

Finally connect node 2 using the cheapest available edge.

Total Cost = 20

---

## Why Prim's Algorithm?

- We only need the minimum edge that expands the tree.
- Cycles are automatically avoided by checking visited nodes.
- No need to explicitly generate all graph edges beforehand.

---

## Time Complexity

There are **n** nodes.

For every node added to the MST, we calculate distances to all remaining nodes.

- Distance calculations: **O(n²)**
- Each edge insertion/removal from the priority queue costs **O(log n)**.

Overall Complexity:

**O(n² log n)**

---

## Space Complexity

- Visited array: **O(n)**
- Priority Queue: **O(n²)** in the worst case because multiple candidate edges are stored.

Overall:

**O(n²)**

---

## Topics

- Graph
- Minimum Spanning Tree (MST)
- Prim's Algorithm
- Greedy
- Priority Queue (Min Heap)
- Manhattan Distance
