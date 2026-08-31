# Find the Minimum and Maximum Number of Nodes Between Critical Points

## Problem

A **critical point** in a linked list is either a **local maximum** or a **local minimum**.

- A node is a **local maximum** if its value is strictly greater than both its previous and next nodes.
- A node is a **local minimum** if its value is strictly smaller than both its previous and next nodes.
- The first and last nodes cannot be critical points because they do not have both a previous and a next node.

Given the head of a linked list, return an array `[minDistance, maxDistance]` where:

- `minDistance` is the minimum distance between any two distinct critical points.
- `maxDistance` is the maximum distance between any two distinct critical points.
- If there are fewer than two critical points, return `[-1, -1]`.

## Examples

### Example 1

Input: `head = [3,1]`

Output: `[-1,-1]`

There are no critical points.

### Example 2

Input: `head = [5,3,1,2,5,1,2]`

Output: `[1,3]`

Critical points are at positions `3`, `5`, and `6`.

- Minimum distance = `6 - 5 = 1`
- Maximum distance = `6 - 3 = 3`

### Example 3

Input: `head = [1,3,2,2,3,2,2,2,7]`

Output: `[3,3]`

Critical points are at positions `2` and `5`.

- Minimum distance = `5 - 2 = 3`
- Maximum distance = `5 - 2 = 3`

## Constraints

- Number of nodes is in the range `[2, 10^5]`.
- `1 <= Node.val <= 10^5`