# Approach - Depth First Search (DFS)

## Intuition

Each city can be considered as a node in an undirected graph.

- `isConnected[i][j] = 1` means there is an edge between city `i` and city `j`.
- A province is simply a **connected component** in this graph.

We traverse the graph using **Depth First Search (DFS)**.

Whenever we find an unvisited city, we start a DFS from it and mark all cities in that connected component as visited. Each new DFS represents one province.

---

## Algorithm

1. Create a visited array initialized to `false`.
2. Iterate through every city.
3. If the city has not been visited:
   - Perform DFS starting from that city.
   - Mark every reachable city as visited.
   - Increment the province count.
4. Return the total province count.

---

## Dry Run

Input:

isConnected =

[
 [1,1,0],
 [1,1,0],
 [0,0,1]
]

Initially:

Visited = [false, false, false]

Province Count = 0

### Start with city 0

- City 0 is unvisited.
- Start DFS.
- Visit city 0.
- City 0 connects to city 1.
- Visit city 1.
- City 1 has no new unvisited neighbors.

Visited:

[true, true, false]

Province Count = 1

### Move to city 1

Already visited.

### Move to city 2

- Unvisited.
- Start DFS.
- Visit city 2.

Visited:

[true, true, true]

Province Count = 2

Return **2**.

---

## Why DFS?

DFS explores every city reachable from the current city before returning.

This ensures that all cities belonging to the same connected component (province) are visited together.

Each time DFS starts from an unvisited city, we have discovered a new province.

---

## Time Complexity

Let **n** be the number of cities.

- We check every entry in the adjacency matrix once.

**Time Complexity:** **O(n²)**

---

## Space Complexity

- Visited array: **O(n)**
- DFS recursion stack: **O(n)** (worst case)

**Overall Space Complexity:** **O(n)**

---

