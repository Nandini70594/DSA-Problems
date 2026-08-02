# Find Peak Element

## Problem Statement

A peak element is an element that is **strictly greater than its neighbors**.

Given a 0-indexed integer array `nums`, return the index of **any** peak element. If the array contains multiple peaks, returning the index of any one of them is valid.

Assume:
- `nums[-1] = -∞`
- `nums[n] = -∞`

This means the first and last elements can also be peak elements.

**Constraint:** Your solution must run in **O(log n)** time.

### Example

**Input:**
```
nums = [1,2,3,1]
```

**Output:**
```
2
```

**Explanation:**
The element `3` is greater than both of its neighbors, so its index `2` is returned.