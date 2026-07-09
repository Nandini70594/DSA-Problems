# Approach

This problem is solved using **Backtracking**.

The algorithm fills the Sudoku board one empty cell at a time. For every empty cell, it tries all digits from `1` to `9`. If placing a digit satisfies all Sudoku rules, it proceeds recursively to solve the remaining board. If a choice leads to an invalid state, it backtracks by removing the digit and tries the next possibility.

---

# Algorithm

1. Start from the first cell of the board.
2. If the current cell is already filled, move to the next cell.
3. If the cell is empty (`'.'`):
   - Try placing every digit from `'1'` to `'9'`.
   - Check whether the digit is valid by ensuring:
     - It does not already exist in the current row.
     - It does not already exist in the current column.
     - It does not already exist in the corresponding `3 × 3` sub-grid.
4. If the placement is valid:
   - Place the digit.
   - Recursively solve the remaining board.
5. If recursion succeeds, the puzzle is solved.
6. Otherwise, remove the digit (backtrack) and try the next one.
7. If no digit can be placed, return `false` to backtrack further.

---

# Validity Check

For every candidate digit:

- Check all 9 cells in the current row.
- Check all 9 cells in the current column.
- Compute the starting indices of the `3 × 3` sub-grid:

```cpp
int sr = (row / 3) * 3;
int sc = (col / 3) * 3;
```

- Traverse the corresponding `3 × 3` box to ensure the digit is not already present.

Only if all three checks pass can the digit be placed.

---

# Why This Works

- The algorithm explores all possible valid placements.
- Invalid choices are discarded immediately using the safety check.
- Backtracking guarantees that incorrect paths are undone.
- Since the problem guarantees exactly one solution, the algorithm eventually reaches the unique valid configuration.

---

# Complexity Analysis

Let `E` be the number of empty cells.

### Time Complexity

```text
O(9^E)
```

- Each empty cell can try at most 9 digits.
- The safety check takes constant time (`9 + 9 + 9 = 27` operations).

Although the worst-case complexity is exponential, backtracking prunes many invalid branches, making it efficient for the fixed `9 × 9` Sudoku board.

### Space Complexity

```text
O(E)
```

- Due to the recursion stack, where `E` is the number of empty cells.
- No additional data structures proportional to the board size are used.