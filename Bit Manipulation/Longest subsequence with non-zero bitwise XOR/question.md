# Longest Subsequence With Non-Zero Bitwise XOR

## Problem Statement
Given an integer array `nums`, return the length of the longest subsequence whose bitwise XOR is non-zero.

If no such subsequence exists, return `0`.

## Examples

Example 1:

Input: `nums = [1, 2, 3]`

Output: `2`

Explanation: The XOR of all elements is `1 ^ 2 ^ 3 = 0`, so all 3 elements cannot be used. A subsequence such as `[2, 3]` has XOR `2 ^ 3 = 1`, which is non-zero. Therefore, the answer is `2`.

Example 2:

Input: `nums = [2, 3, 4]`

Output: `3`

Explanation: `2 ^ 3 ^ 4 = 5`, which is non-zero. Therefore, the entire array can be used and the answer is `3`.

## Constraints

- `1 <= nums.length <= 10^5`
- `0 <= nums[i] <= 10^9`