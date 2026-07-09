# Trapping Rain Water

## Problem Statement

Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water can be trapped after raining.

---

## Examples

### Example 1

**Input**

```text
height = [0,1,0,2,1,0,1,3,2,1,2,1]
```

**Output**

```text
6
```

**Explanation**

The elevation map traps a total of **6** units of rainwater.

---

### Example 2

**Input**

```text
height = [4,2,0,3,2,5]
```

**Output**

```text
9
```

---

## Constraints

- `n == height.length`
- `1 <= n <= 2 × 10⁴`
- `0 <= height[i] <= 10⁵`