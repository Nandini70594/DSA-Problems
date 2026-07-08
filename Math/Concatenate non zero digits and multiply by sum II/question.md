# Concatenate Non-Zero Digits and Multiply by Sum II

## Problem Statement

You are given a string `s` consisting of digits and a 2D integer array `queries`, where each query is represented as `[l, r]`.

For every query:

1. Extract the substring `s[l...r]`.
2. Form a new integer `x` by concatenating all the **non-zero** digits from the substring while preserving their original order.
   - If there are no non-zero digits, then `x = 0`.
3. Compute the sum of the digits of `x`.
4. Return the value:

```
x × sum
```

Since the answer can be very large, return each answer modulo **10⁹ + 7**.

---

## Example 1

**Input**

```text
s = "10203004"
queries = [[0,7],[1,3],[4,6]]
```

**Output**

```text
[12340,4,9]
```

**Explanation**

- Query `[0,7]`
  - Substring = `"10203004"`
  - Non-zero digits = `1234`
  - Sum = `1 + 2 + 3 + 4 = 10`
  - Answer = `1234 × 10 = 12340`

- Query `[1,3]`
  - Substring = `"020"`
  - Non-zero digits = `2`
  - Sum = `2`
  - Answer = `2 × 2 = 4`

- Query `[4,6]`
  - Substring = `"300"`
  - Non-zero digits = `3`
  - Sum = `3`
  - Answer = `3 × 3 = 9`

---

## Example 2

**Input**

```text
s = "1000"
queries = [[0,3],[1,1]]
```

**Output**

```text
[1,0]
```

---

## Example 3

**Input**

```text
s = "9876543210"
queries = [[0,9]]
```

**Output**

```text
[444444137]
```

---

## Constraints

- `1 <= s.length <= 10^5`
- `s` consists only of digits.
- `1 <= queries.length <= 10^5`
- `queries[i] = [li, ri]`
- `0 <= li <= ri < s.length`