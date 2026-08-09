# Smallest Divisible Digit Product I

**Difficulty:** Easy

## Problem

You are given two integers `n` and `t`.

Return the **smallest number greater than or equal to `n`** such that the **product of its digits** is divisible by `t`.

## Examples

### Example 1

Input: `n = 10, t = 2`

Output: `10`

Explanation:

The product of the digits of `10` is:

`1 × 0 = 0`

Since `0` is divisible by `2`, `10` is the smallest valid number.

### Example 2

Input: `n = 15, t = 3`

Output: `16`

Explanation:

The product of the digits of `15` is:

`1 × 5 = 5`

`5` is not divisible by `3`.

For `16`:

`1 × 6 = 6`

Since `6` is divisible by `3`, the answer is `16`.

## Constraints

- `1 <= n <= 100`
- `1 <= t <= 10`

