# Distribute Elements Into Two Arrays I

## Problem

You are given a **1-indexed** array of distinct integers `nums` of length `n`.

You need to distribute all the elements of `nums` between two arrays `arr1` and `arr2` using `n` operations.

- In the first operation, append `nums[1]` to `arr1`.
- In the second operation, append `nums[2]` to `arr2`.
- Afterwards, in the `i`th operation:
  - If the last element of `arr1` is **greater** than the last element of `arr2`, append `nums[i]` to `arr1`.
  - Otherwise, append `nums[i]` to `arr2`.

The `result` array is formed by concatenating `arr1` and `arr2`.

Return the array `result`.


## Constraints

- `3 <= n <= 50`
- `1 <= nums[i] <= 100`
- All elements in `nums` are distinct.