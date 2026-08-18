# Find the Largest Almost Missing Integer

## Problem

Given an integer array `nums` and an integer `k`, an integer `x` is called **almost missing** if it appears in exactly one subarray of size `k`.

Return the largest almost missing integer. If no such integer exists, return `-1`.

## Example

Input:
nums = [3, 9, 2, 1, 7], k = 3

Output:
7

Explanation:
- 3 appears in exactly one subarray of size 3.
- 7 appears in exactly one subarray of size 3.
- The largest is 7.