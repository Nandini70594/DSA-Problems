# 494. Target Sum

## Problem Statement

You are given an integer array `nums` and an integer `target`.

You want to build an expression by adding either a `'+'` or `'-'` sign before each integer in `nums`, and then concatenate all the integers.

- For example, if `nums = [2,1]`, one expression can be `"+2-1"`.

Return the **number of different expressions** that you can build which evaluate to `target`.

---

## Example 1

**Input**

```text
nums = [1,1,1,1,1]
target = 3
```

**Output**

```text
5
```

**Explanation**

There are five different expressions that evaluate to `3`:

```text
-1 +1 +1 +1 +1 = 3
+1 -1 +1 +1 +1 = 3
+1 +1 -1 +1 +1 = 3
+1 +1 +1 -1 +1 = 3
+1 +1 +1 +1 -1 = 3
```

---

## Example 2

**Input**

```text
nums = [1]
target = 1
```

**Output**

```text
1
```

---

## Constraints

- `1 <= nums.length <= 20`
- `0 <= nums[i] <= 1000`
- `0 <= sum(nums) <= 1000`
- `-1000 <= target <= 1000`