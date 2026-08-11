# Smallest Missing Integer Greater Than Sequential Prefix Sum

## Problem

You are given a 0-indexed array of integers `nums`.

A prefix `nums[0..i]` is sequential if, for every `1 <= j <= i`:

    nums[j] = nums[j - 1] + 1

The prefix containing only `nums[0]` is considered sequential.

Return the smallest integer `x` missing from `nums` such that:

    x >= sum of the longest sequential prefix

## Examples

### Example 1

Input:
nums = [1,2,3,2,5]

Output:
6

The longest sequential prefix is [1,2,3].

Its sum is 1 + 2 + 3 = 6.

Since 6 is not present in the array, the answer is 6.

### Example 2

Input:
nums = [3,4,5,1,12,14,13]

Output:
15

The longest sequential prefix is [3,4,5].

Its sum is 3 + 4 + 5 = 12.

12, 13, and 14 are present in the array, but 15 is not.

Therefore, the answer is 15.

## Constraints

- 1 <= nums.length <= 50
- 1 <= nums[i] <= 50