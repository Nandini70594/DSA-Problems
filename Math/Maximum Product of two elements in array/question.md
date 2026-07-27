# Maximum Product of Two Elements in an Array

## Problem Statement

Given an integer array `nums`, choose two different indices `i` and `j`.

Return the maximum value of:

(nums[i] - 1) * (nums[j] - 1)

## Example 1

Input:
nums = [3,4,5,2]

Output:
12

Explanation:
Choose 4 and 5.

(4 - 1) × (5 - 1) = 3 × 4 = 12

## Example 2

Input:
nums = [1,5,4,5]

Output:
16

## Example 3

Input:
nums = [3,7]

Output:
12

## Constraints

- 2 ≤ nums.length ≤ 500
- 1 ≤ nums[i] ≤ 1000