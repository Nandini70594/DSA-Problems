# Happy Number

## Problem Statement

Write an algorithm to determine if a number `n` is a happy number.

A happy number is defined by the following process:

1. Starting with any positive integer, replace the number by the sum of the squares of its digits.
2. Repeat the process until:
   - The number equals `1` (where it will stay), or
   - It loops endlessly in a cycle that does not include `1`.
3. Numbers for which this process ends in `1` are called **happy numbers**.

Return `true` if `n` is a happy number, and `false` otherwise.

### Example 1

**Input:**

```text
n = 19
```

**Output:**

```text
true
```

**Explanation:**

```text
1² + 9² = 82
8² + 2² = 68
6² + 8² = 100
1² + 0² + 0² = 1
```

### Example 2

**Input:**

```text
n = 2
```

**Output:**

```text
false
```

### Constraints

- `1 <= n <= 2³¹ - 1`