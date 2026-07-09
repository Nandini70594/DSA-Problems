# Sliding Window Maximum

## Problem Statement

You are given an array of integers `nums` and an integer `k`. There is a sliding window of size `k` that moves from the left of the array to the right, one position at a time.

For each window, return the maximum element inside that window.

---

## Examples

### Example 1

**Input**

```text
nums = [1,3,-1,-3,5,3,6,7]
k = 3
```

**Output**

```text
[3,3,5,5,6,7]
```

---

### Example 2

**Input**

```text
nums = [1]
k = 1
```

**Output**

```text
[1]
```

---

## Constraints

- `1 <= nums.length <= 10⁵`
- `-10⁴ <= nums[i] <= 10⁴`
- `1 <= k <= nums.length`