# Partition Equal Subset Sum

## Problem Statement

Given an integer array `nums`, return `true` if the array can be partitioned into two subsets such that the sum of the elements in both subsets is equal. Otherwise, return `false`.

### Example 1

**Input:**

```text
nums = [1,5,11,5]
```

**Output:**

```text
true
```

**Explanation:**

The array can be partitioned as:

```text
[1, 5, 5] and [11]
```

---

### Example 2

**Input:**

```text
nums = [1,2,3,5]
```

**Output:**

```text
false
```

**Explanation:**

The array cannot be partitioned into two subsets with equal sum.

---

## Constraints

- `1 <= nums.length <= 200`
- `1 <= nums[i] <= 100`