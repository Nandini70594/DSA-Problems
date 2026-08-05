# Approach

## Intuition

Since the keyboard layout is fixed, we can assign each letter to its corresponding keyboard row.

- Row 1 → `qwertyuiop`
- Row 2 → `asdfghjkl`
- Row 3 → `zxcvbnm`

Store this information in an `unordered_map<char, int>` where:

```cpp
row['q'] = 1;
row['a'] = 2;
row['z'] = 3;
```

For every word:

1. Convert the first character to lowercase.
2. Find the keyboard row of the first character.
3. Traverse the remaining characters.
4. If every character belongs to the same row, the word is valid.
5. Otherwise, discard it.

---

## Algorithm

1. Create three strings representing the keyboard rows.
2. Fill an `unordered_map<char, int>` with the row number of each character.
3. Initialize an empty answer vector.
4. For every word:
   - Determine the row of its first character.
   - Traverse every character in the word.
   - Convert each character to lowercase using `tolower()`.
   - Compare its row with the first character's row.
   - If any character belongs to a different row, reject the word.
5. If all characters belong to the same row, add the word to the answer.
6. Return the answer vector.

---

## Complexity Analysis

### Time Complexity

- Building the map takes **O(26)**, which is constant.
- Traversing all words takes **O(N × L)**.

Overall:

```text
O(N × L)
```

where

- `N` = number of words
- `L` = maximum length of a word.

### Space Complexity

The keyboard mapping stores only 26 characters.

```text
O(1)
```

The returned answer vector is not counted as extra space.