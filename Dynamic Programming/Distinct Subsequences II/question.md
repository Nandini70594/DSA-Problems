# Distinct Subsequences II

## Question

Given a string `s`, return the number of distinct non-empty subsequences of `s`.

Since the answer can be very large, return it modulo `10^9 + 7`.

A subsequence is formed by deleting zero or more characters while maintaining the relative order of the remaining characters.

## Constraints

- `1 <= s.length <= 2000`
- `s` consists of lowercase English letters.

### Examples

- Input: `s = "abc"` → Output: `7`
- Input: `s = "aba"` → Output: `6`
- Input: `s = "aaa"` → Output: `3`