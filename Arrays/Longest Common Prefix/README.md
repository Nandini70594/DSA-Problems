# Approach

We use the first string as a reference and compare its characters with the characters at the same position in all other strings.

## Steps

1. Traverse each character of the first string.
2. For every character index:
   - Compare it with the corresponding character in the remaining strings.

3. If:
   - the index exceeds the length of any string, or
   - characters do not match,

   then return the substring from the beginning up to the current index.

4. If all characters match throughout the first string, return the entire first string.

This approach checks character-by-character until a mismatch occurs.

---

# Complexity Analysis

## Time Complexity

```text
O(n * m)
```

Where:
- `n` = number of strings
- `m` = length of the shortest string (in worst case)

Each character may be compared across all strings.

---

## Space Complexity

```text
O(1)
```

No extra space is used apart from the returned string.