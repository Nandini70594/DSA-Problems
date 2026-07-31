# Minimum Size Subarray Sum

## Problem Statement
Given an array of positive integers `nums` and a positive integer `target`, find the minimum length of a contiguous subarray whose sum is greater than or equal to `target`.

Return `0` if no such subarray exists.

## Example

**Input:**
target = 7  
nums = [2,3,1,2,4,3]

**Output:**
2

**Explanation:**
The subarray `[4,3]` has a sum of `7` and is the shortest subarray satisfying the condition.

## Constraints
- `1 <= target <= 10^9`
- `1 <= nums.length <= 10^5`
- `1 <= nums[i] <= 10^4`