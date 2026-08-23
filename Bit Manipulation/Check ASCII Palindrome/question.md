# Check ASCII Palindromic

## Problem

You are given a string `s` consisting of lowercase English letters.

Construct a **binary string** by replacing each character in `s` with the **8-bit binary representation** of its ASCII value, including leading zeros, while preserving the original order of the characters.

Return `true` if the resulting binary string is a palindrome. Otherwise, return `false`.

A **binary string** is a string containing only the characters `'0'` and `'1'`.

A **palindrome** is a string that reads the same forward and backward.

---

## Examples

### Example 1

**Input:**
`s = "ff"`

**Output:**
`true`

**Explanation:**

The ASCII value of `f` is `102`.

Its 8-bit binary representation is:

`01100110`

For `"ff"`:

`01100110 01100110`

The resulting binary string is:

`0110011001100110`

This is a palindrome, so the answer is `true`.

### Example 2

**Input:**
`s = "leet"`

**Output:**
`false`

**Explanation:**

`l = 108 → 01101100`  
`e = 101 → 01100101`  
`e = 101 → 01100101`  
`t = 116 → 01110100`

Resulting binary string:

`01101100011001010110010101110100`

It is not a palindrome.

---

## Constraints

- `1 <= s.length <= 100`
- `s` consists of lowercase English letters.