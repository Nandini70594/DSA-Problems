# Minimum Subset Sum Difference

## Problem Statement

Given an array `arr[]` containing positive integers, partition it into two subsets such that the absolute difference between the sum of the two subsets is minimized.

Return the minimum possible difference between the subset sums.

### Example 1

```
Input:
arr = [1, 6, 11, 5]

Output:
1

Explanation:
Subset 1 = {1, 5, 6}, Sum = 12
Subset 2 = {11}, Sum = 11

Minimum Difference = |12 - 11| = 1
```

### Example 2

```
Input:
arr = [1, 2, 7]

Output:
4

Explanation:
Subset 1 = {1, 2}, Sum = 3
Subset 2 = {7}, Sum = 7

Minimum Difference = |7 - 3| = 4
```

### Constraints

- `1 <= arr.size() <= 100`
- `1 <= arr[i] <= 100`