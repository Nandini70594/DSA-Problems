# Maximum Product of Three Numbers

## Problem Statement

Given an integer array `nums`, find three numbers whose product is maximum and return the maximum product.

### Example 1
**Input:**
```text
nums = [1,2,3]
```

**Output:**
```text
6
```

### Example 2
**Input:**
```text
nums = [1,2,3,4]
```

**Output:**
```text
24
```

### Example 3
**Input:**
```text
nums = [-1,-2,-3]
```

**Output:**
```text
-6
```

## Constraints

- `3 <= nums.length <= 10^4`
- `-1000 <= nums[i] <= 1000`

## Key Observation

The maximum product can come from either:

1. The **three largest numbers** in the array.
2. The **two smallest (most negative) numbers** and the **largest number**, since the product of two negative numbers is positive.

The solution should consider both possibilities and return the larger product.