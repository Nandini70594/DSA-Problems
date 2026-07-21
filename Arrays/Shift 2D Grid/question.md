# Shift 2D Grid

## Problem Statement

Given an `m × n` grid and an integer `k`, shift the grid `k` times.

In one shift operation:

- `grid[i][j]` moves to `grid[i][j + 1]`
- `grid[i][n - 1]` moves to `grid[i + 1][0]`
- `grid[m - 1][n - 1]` moves to `grid[0][0]`

Return the grid after performing all the shifts.