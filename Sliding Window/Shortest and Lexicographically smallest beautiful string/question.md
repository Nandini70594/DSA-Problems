# Shortest and Lexicographically Smallest Beautiful String

## Problem

You are given a binary string `s` and a positive integer `k`.

A substring of `s` is called **beautiful** if it contains exactly `k` occurrences of `'1'`.

Return the **shortest** beautiful substring. If there are multiple beautiful substrings having the same shortest length, return the **lexicographically smallest** one.

If no beautiful substring exists, return an empty string `""`.

### Example

Input: `s = "100011001", k = 3`

Output: `"11001"`

The substring `"11001"` contains exactly 3 ones and has the minimum possible length.

### Constraints

- `1 <= s.length <= 100`
- `1 <= k <= s.length`
- `s` consists only of `'0'` and `'1'`
