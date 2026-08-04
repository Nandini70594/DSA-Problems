# Find Missing Elements

## Problem Statement

You are given an integer array `nums` consisting of unique integers.

Originally, `nums` contained every integer within a certain range. However, some integers might have gone missing from the array.

The smallest and largest integers of the original range are still present in `nums`.

Return a sorted list of all the missing integers in this range. If no integers are missing, return an empty list.

---

### Example 1

**Input:**
```text
nums = [1,4,2,5]
```

**Output:**
```text
[3]
```

**Explanation:**

The smallest integer is `1` and the largest is `5`, so the complete range is `[1,2,3,4,5]`. Only `3` is missing.

---

### Example 2

**Input:**
```text
nums = [7,8,6,9]
```

**Output:**
```text
[]
```

**Explanation:**

The complete range is `[6,7,8,9]`. No elements are missing.

---

### Example 3

**Input:**
```text
nums = [5,1]
```

**Output:**
```text
[2,3,4]
```

**Explanation:**

The complete range is `[1,2,3,4,5]`. The missing elements are `2`, `3`, and `4`.

---

## Constraints

- `2 <= nums.length <= 100`
- `1 <= nums[i] <= 100`
- All elements in `nums` are unique.