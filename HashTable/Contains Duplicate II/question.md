# 219. Contains Duplicate II

## Problem Statement

Given an integer array `nums` and an integer `k`, return `true` if there are two **distinct** indices `i` and `j` in the array such that:

- `nums[i] == nums[j]`
- `abs(i - j) <= k`

Otherwise, return `false`.

---

## Example 1

### Input

```text
nums = [1,2,3,1]
k = 3
```

### Output

```text
true
```

### Explanation

The value `1` appears at indices `0` and `3`.

```text
|0 - 3| = 3 <= k
```

Hence, the answer is `true`.

---

## Example 2

### Input

```text
nums = [1,0,1,1]
k = 1
```

### Output

```text
true
```

### Explanation

The value `1` appears at indices `2` and `3`.

```text
|2 - 3| = 1 <= k
```

Hence, the answer is `true`.

---

## Example 3

### Input

```text
nums = [1,2,3,1,2,3]
k = 2
```

### Output

```text
false
```

### Explanation

Although duplicate values exist, the distance between every pair of equal elements is greater than `2`.

---

## Constraints

- `1 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`
- `0 <= k <= 10^5`