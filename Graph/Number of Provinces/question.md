# Number of Provinces

## Problem Statement

There are `n` cities. Some cities are directly connected, while others are not.

- If city **A** is directly connected to city **B**, and city **B** is directly connected to city **C**, then city **A** is indirectly connected to city **C**.

A **province** is a group of cities that are directly or indirectly connected, with no connections to cities outside the group.

You are given an `n × n` adjacency matrix `isConnected`, where:

- `isConnected[i][j] = 1` indicates that city `i` and city `j` are directly connected.
- `isConnected[i][j] = 0` indicates no direct connection.

Return the **total number of provinces**.

---

## Example 1

**Input**

isConnected = [[1,1,0],[1,1,0],[0,0,1]]

**Output**

2

**Explanation**

- Cities 0 and 1 form one province.
- City 2 forms another province.

---

## Example 2

**Input**

isConnected = [[1,0,0],[0,1,0],[0,0,1]]

**Output**

3

**Explanation**

Each city is isolated, so each forms its own province.

---

## Constraints

- 1 <= n <= 200
- n == isConnected.length
- n == isConnected[i].length
- isConnected[i][j] is either 0 or 1
- isConnected[i][i] == 1
- isConnected[i][j] == isConnected[j][i]
