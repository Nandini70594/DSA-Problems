# Approach: BFS with Stops Tracking

## Intuition

The problem requires finding the cheapest path while restricting the number of stops.

Unlike the standard shortest path problem, reaching a node with the minimum cost is not always sufficient because a path with fewer stops may still lead to a better overall answer.

We perform a **Breadth-First Search (BFS)** where each state stores:

- Current node
- Total cost to reach it
- Number of stops used

Since BFS processes paths level by level, it naturally explores routes with increasing numbers of stops.

---

## Algorithm

1. Build an adjacency list from the flight list.
2. Create a queue storing:
   - Current node
   - Current cost
   - Stops used
3. Initialize the source city with:
   - Cost = 0
   - Stops = -1
4. While the queue is not empty:
   - Pop the front state.
   - Traverse all adjacent cities.
   - If a cheaper cost is found and the stop limit is not exceeded:
     - Update the distance.
     - Push the new state into the queue.
5. Return the minimum cost for the destination if reachable; otherwise return `-1`.

---

## Why BFS?

The queue processes routes in increasing order of stops.

Each queue entry contains:

- Current city
- Cost so far
- Stops used

This ensures that only paths satisfying the stop constraint are explored.

---

## Time Complexity

- Building graph: **O(E)**
- BFS traversal: **O(E)**

**Overall:** **O(E)**

where **E** is the number of flights.

---

## Space Complexity

- Graph: **O(E)**
- Distance array: **O(V)**
- Queue: **O(V)**

**Overall:** **O(V + E)**

where **V** is the number of cities.



