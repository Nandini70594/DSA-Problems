# Keyboard Row

## Problem Statement

Given an array of strings `words`, return all the words that can be typed using letters from **only one row** of the American keyboard.

The keyboard rows are:

- Row 1: `qwertyuiop`
- Row 2: `asdfghjkl`
- Row 3: `zxcvbnm`

The solution should be **case-insensitive**, meaning uppercase and lowercase letters are treated the same.

---

## Example

### Input
```text
words = ["Hello","Alaska","Dad","Peace"]
```

### Output
```text
["Alaska","Dad"]
```

---

## Constraints

- `1 <= words.length <= 20`
- `1 <= words[i].length <= 100`
- `words[i]` consists only of English letters.

---

## Complexity

- **Time Complexity:** `O(N × L)`
  - `N` = number of words
  - `L` = maximum length of a word

- **Space Complexity:** `O(1)`
  - The keyboard mapping stores only 26 letters, which is constant space.
  - The returned answer vector is not counted as extra space.