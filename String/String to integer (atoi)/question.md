# String to Integer (atoi)

## Problem Statement

Implement the `myAtoi(string s)` function, which converts a string to a 32-bit signed integer.

The algorithm for `myAtoi(string s)` is as follows:

1. **Whitespace:** Ignore any leading whitespace (`" "`).
2. **Signedness:** Determine the sign by checking if the next character is `'-'` or `'+'`, assuming positivity if neither is present.
3. **Conversion:** Read the integer by skipping leading zeros until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is `0`.
4. **Overflow Handling:** If the integer is outside the 32-bit signed integer range `[-2³¹, 2³¹ - 1]`, clamp the value:
   - Less than `-2³¹` → return `-2³¹`
   - Greater than `2³¹ - 1` → return `2³¹ - 1`
5. Return the resulting integer.

---

## Examples

### Example 1

**Input**
```text
s = "42"
```

**Output**
```text
42
```

---

### Example 2

**Input**
```text
s = "   -042"
```

**Output**
```text
-42
```

---

### Example 3

**Input**
```text
s = "1337c0d3"
```

**Output**
```text
1337
```

---

### Example 4

**Input**
```text
s = "0-1"
```

**Output**
```text
0
```

---

### Example 5

**Input**
```text
s = "words and 987"
```

**Output**
```text
0
```

---

## Constraints

- `0 <= s.length <= 200`
- `s` consists of English letters (uppercase and lowercase), digits (`0-9`), spaces (`' '`), `'+'`, `'-'`, and `'.'`.