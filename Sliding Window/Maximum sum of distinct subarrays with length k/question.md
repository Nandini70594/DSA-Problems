# Maximum Sum of Distinct Subarrays With Length K

## Problem Statement
Given an integer array `nums` and an integer `k`, find the maximum sum among all subarrays of length `k` such that all elements in the subarray are distinct.

If no valid subarray exists, return `0`.

## Example

**Input:**
nums = [1,5,4,2,9,9,9], k = 3

**Output:**
15

**Explanation:**
The valid subarrays of length `3` are:
- [1,5,4] → Sum = 10
- [5,4,2] → Sum = 11
- [4,2,9] → Sum = 15

The remaining subarrays contain duplicate elements, so they are invalid.

Hence, the maximum sum is **15**.

## Constraints
- `1 <= k <= nums.length <= 10^5`
- `1 <= nums[i] <= 10^5`