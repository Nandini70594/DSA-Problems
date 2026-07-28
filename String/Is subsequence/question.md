# Is Subsequence

## Problem Statement

Given two strings `s` and `t`, return `true` if `s` is a subsequence of `t`, otherwise return `false`.

A subsequence of a string is a new string formed from the original string by deleting some (or no) characters **without changing the relative order** of the remaining characters.

For example:

- `"ace"` is a subsequence of `"abcde"`.
- `"aec"` is **not** a subsequence of `"abcde"` because the order is not preserved.

---

## Examples

### Example 1

**Input**

```text
s = "abc"
t = "ahbgdc"
```

**Output**

```text
true
```

---

### Example 2

**Input**

```text
s = "axc"
t = "ahbgdc"
```

**Output**

```text
false
```

---

## Constraints

- `0 <= s.length <= 100`
- `0 <= t.length <= 10^4`
- `s` and `t` consist only of lowercase English letters.