# Arranging Coins

## Problem Statement

You are given `n` coins and need to arrange them into a staircase. The `iᵗʰ` row must contain exactly `i` coins. The last row may be incomplete.

Return the number of **complete rows** that can be formed.

### Example

**Input**
```text
n = 8
```

**Output**
```text
3
```

**Explanation**

- Row 1 → 1 coin
- Row 2 → 2 coins
- Row 3 → 3 coins

A total of 6 coins are used. The remaining 2 coins are not enough to complete the 4th row, so the answer is **3**.

## Constraints

- `1 <= n <= 2^31 - 1`