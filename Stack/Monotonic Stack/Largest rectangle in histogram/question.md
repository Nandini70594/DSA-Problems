# Largest Rectangle in Histogram

## Problem Statement

Given an array of integers `heights` representing the heights of histogram bars, where the width of each bar is `1`, return the area of the largest rectangle that can be formed in the histogram.

---

## Examples

### Example 1

**Input**

```text
heights = [2,1,5,6,2,3]
```

**Output**

```text
10
```

**Explanation**

The largest rectangle has height `5` and width `2`, giving an area of `10`.

---

### Example 2

**Input**

```text
heights = [2,4]
```

**Output**

```text
4
```

---

## Constraints

- `1 <= heights.length <= 10⁵`
- `0 <= heights[i] <= 10⁴`