# Count Subarrays With Majority Element I

## Problem Statement

Given an integer array `nums` and an integer `target`.

Return the number of subarrays in which `target` is the **majority element**.

An element is considered a majority element if it appears **strictly more than half** of the size of the subarray.

---

## Examples

### Example 1

Input:

nums = [1,2,2,3]
target = 2


Output:

5


Valid subarrays:

- [2]
- [2]
- [2,2]
- [1,2,2]
- [2,2,3]

---

### Example 2

Input:

nums = [1,1,1,1]
target = 1


Output:

10

Explanation:

All subarrays contain `1` as majority.

---

### Example 3

Input:

nums = [1,2,3]
target = 4


Output:

0