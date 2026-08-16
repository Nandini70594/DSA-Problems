# 3996. Even Number of Knight Moves

## Problem

You are given two integer arrays `start` and `target`, where each array is of the form `[x, y]` representing a cell on a standard 8 x 8 chessboard.

Return `true` if a knight can move from `start` to `target` in an even number of moves. Otherwise, return `false`.

A knight moves two squares in one direction and one square perpendicular to it.

## Example

Input:
start = [0, 0]
target = [2, 2]

Output:
true

Explanation:
A knight can reach [2, 2] from [0, 0] in 2 moves:

[0,0] → [1,2] → [2,2]

Since 2 is even, the answer is true.

## Constraints

- `start.length == 2`
- `target.length == 2`
- `0 <= start[i], target[i] < 8`