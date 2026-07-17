# Critical Connections in a Network

**Difficulty:** Hard

## Problem Statement

There are `n` servers numbered from `0` to `n - 1` connected by undirected server-to-server connections forming a network where `connections[i] = [ai, bi]` represents a connection between servers `ai` and `bi`.

Any server can reach every other server directly or indirectly through the network.

A **critical connection** (or **bridge**) is a connection that, if removed, disconnects part of the network.

Return all critical connections in the network in any order.

---

## Example 1

**Input**

```text
n = 4
connections = [[0,1],[1,2],[2,0],[1,3]]
```

**Output**

```text
[[1,3]]
```

**Explanation**

Removing edge `(1,3)` disconnects node `3` from the rest of the graph.

---

## Example 2

**Input**

```text
n = 2
connections = [[0,1]]
```

**Output**

```text
[[0,1]]
```

---

## Constraints

- `2 <= n <= 10^5`
- `n - 1 <= connections.length <= 10^5`
- `0 <= ai, bi <= n - 1`
- `ai != bi`
- No repeated connections.
