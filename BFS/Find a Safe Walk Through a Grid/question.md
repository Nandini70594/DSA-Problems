# Find a Safe Walk Through a Grid

## Problem Statement

You are given an `m x n` binary matrix `grid` and an integer `health`.

- You start at `(0,0)`
- You need to reach `(m-1,n-1)`
- You can move up, down, left, or right

If a cell contains `1`, your health decreases by `1`.

Return `true` if you can reach the destination with health remaining greater than `0`, otherwise return `false`.

---

## Example 1

### Input

```text
grid = [[0,1,0,0,0],
        [0,1,0,1,0],
        [0,0,0,1,0]]

health = 1