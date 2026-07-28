# Approach

## Idea

Use two pointers to traverse both strings simultaneously.

- One pointer traverses `s`.
- The other pointer traverses `t`.

Whenever the characters match, move both pointers forward.

If they do not match, move only the pointer of `t` since we are allowed to skip characters from `t`.

If every character of `s` is matched before reaching the end of `t`, then `s` is a subsequence of `t`.

---

## Algorithm

1. If `s` is empty, return `true`.
2. If `t` is empty, return `false`.
3. Initialize two pointers:
   - `i` for `s`
   - `j` for `t`
4. Traverse while both pointers are within their respective strings.
5. If `s[i] == t[j]`, increment both pointers.
6. Otherwise, increment only the pointer of `t`.
7. If all characters of `s` are matched, return `true`; otherwise, return `false`.

---

## Complexity Analysis

### Time Complexity

```text
O(n)
```

where `n` is the length of `t`.

---

### Space Complexity

```text
O(1)
```

---

## Follow-up

If there are a very large number of queries (`s1, s2, ...`) while `t` remains fixed:

- Preprocess `t` by storing the indices of every character.
- For each character in `s`, use **binary search (`upper_bound`)** to find the next valid occurrence in `t`.
- This avoids scanning the entire string `t` for every query.

Complexity:

- Preprocessing: **O(n)**
- Each query: **O(m log n)**

where:
- `n` = length of `t`
- `m` = length of `s`