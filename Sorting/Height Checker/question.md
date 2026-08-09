# Height Checker

**Difficulty:** Easy

## Problem

A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in non-decreasing order by height.

You are given an integer array `heights` representing the current order that the students are standing in.

Return the number of indices where `heights[i] != expected[i]`, where `expected` is the sorted version of `heights`.

## Examples

### Example 1

Input: `heights = [1,1,4,2,1,3]`

Output: `3`

Explanation:

`heights = [1,1,4,2,1,3]`  
`expected = [1,1,1,2,3,4]`

Indices `2`, `4`, and `5` do not match.

### Example 2

Input: `heights = [5,1,2,3,4]`

Output: `5`

### Example 3

Input: `heights = [1,2,3,4,5]`

Output: `0`

## Constraints

- `1 <= heights.length <= 100`
- `1 <= heights[i] <= 100`

---