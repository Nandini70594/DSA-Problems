# Find Smallest Letter Greater Than Target

## Problem Statement

You are given a sorted array of lowercase characters `letters` in **non-decreasing order** and a character `target`.

Return the **smallest character** in the array that is **lexicographically greater** than `target`.

If no such character exists, return the **first character** in the array.

---

## Example 1

**Input**

```text
letters = ['c','f','j']
target = 'a'
```

**Output**

```text
c
```

**Explanation**

The smallest character greater than `'a'` is `'c'`.

---

## Example 2

**Input**

```text
letters = ['c','f','j']
target = 'c'
```

**Output**

```text
f
```

**Explanation**

The smallest character greater than `'c'` is `'f'`.

---