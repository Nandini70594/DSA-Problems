# Approach

The Excel column title follows a modified base-26 numbering system.

Unlike the normal base-26 system where digits range from **0 to 25**, Excel columns use letters **A to Z**, representing **1 to 26**. Therefore, before finding the remainder, we decrement the current number by `1` to convert it into a `0-25` range.

We repeatedly:
1. Decrement the column number by `1`.
2. Find the remainder when divided by `26` to determine the current character.
3. Convert the remainder to its corresponding uppercase letter (`'A' + remainder`).
4. Append the character to the answer.
5. Divide the column number by `26` to process the next position.

Since the characters are generated from right to left (least significant to most significant), we reverse the string at the end to obtain the final Excel column title.

---

## Algorithm

1. Initialize an empty string `ans`.
2. While `columnNumber` is greater than `0`:
   - Decrement `columnNumber` by `1`.
   - Compute `remainder = columnNumber % 26`.
   - Append the character `('A' + remainder)` to `ans`.
   - Update `columnNumber = columnNumber / 26`.
3. Reverse `ans`.
4. Return `ans`.

---

## Complexity Analysis

### Time Complexity

- **O(log₍26₎ n)**

Each iteration processes one character of the Excel column title.

### Space Complexity

- **O(log₍26₎ n)**

The extra space is used to store the resulting string.