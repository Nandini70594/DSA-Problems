# GCD of Odd and Even Sums

## Problem Statement

You are given an integer `n`. Your task is to compute the GCD (Greatest Common Divisor) of two values:

- `sumOdd`: the sum of the smallest `n` positive odd numbers.
- `sumEven`: the sum of the smallest `n` positive even numbers.

Return the GCD of `sumOdd` and `sumEven`.

---

## Examples

### Example 1

**Input**

```text
n = 4
```

**Output**

```text
4
```

**Explanation**

- Sum of first 4 odd numbers = 1 + 3 + 5 + 7 = 16
- Sum of first 4 even numbers = 2 + 4 + 6 + 8 = 20
- GCD(16, 20) = 4

---

### Example 2

**Input**

```text
n = 5
```

**Output**

```text
5
```

**Explanation**

- Sum of first 5 odd numbers = 1 + 3 + 5 + 7 + 9 = 25
- Sum of first 5 even numbers = 2 + 4 + 6 + 8 + 10 = 30
- GCD(25, 30) = 5

---

## Constraints

- `1 <= n <= 1000`