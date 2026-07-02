# Approach

We use Breadth First Search (BFS) to check whether it is possible to reach the bottom-right cell while maintaining positive health.

Each state in the queue stores:

- current row
- current column
- remaining health

When moving to a new cell:

- if the cell contains `1`, health decreases by `1`
- movement is allowed only if health remains greater than `0`

To avoid unnecessary processing, we store the maximum health seen so far for every cell.

If we reach the same cell again with lower or equal health, we skip that path because a better path already exists.

The BFS continues until:

- the destination is reached → return `true`
- all possible states are exhausted → return `false`

---

# Complexity Analysis

## Time Complexity 

```text
O(m × n)

## Space Complexity 

```text
O(m × n)

Extra space is used for:

queue
health tracking matrix