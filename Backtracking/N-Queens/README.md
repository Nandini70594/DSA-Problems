# Approach

This problem is solved using **Backtracking**.

The idea is to place one queen in each row. For every row, try placing the queen in every column. If the position is safe, place the queen and recursively solve for the next row. If no valid placement is possible, backtrack by removing the previously placed queen and try another position.

---

# Algorithm

1. Start from the first row.
2. For every column in the current row:
   - Check if placing a queen is safe.
3. A position is considered safe if:
   - No queen exists in the same row.
   - No queen exists in the same column.
   - No queen exists on the upper-left diagonal.
   - No queen exists on the upper-right diagonal.
4. If the position is safe:
   - Place the queen.
   - Recursively solve the next row.
5. After returning from recursion:
   - Remove the queen (backtrack).
6. If all rows are processed, store the current board configuration as one valid solution.

---

# Safety Check

For every candidate position `(row, col)`:

- Check the current row.
- Check the current column.
- Traverse the upper-left diagonal.
- Traverse the upper-right diagonal.

If none of these contain a queen, the position is safe.

---

# Why This Works

- Only one queen is placed in each row.
- Every placement satisfies all attack constraints before moving to the next row.
- If a placement leads to an invalid configuration later, backtracking removes it and explores another possibility.
- This guarantees that every valid arrangement is generated exactly once.

---

# Complexity Analysis

Let `n` be the size of the chessboard.

### Time Complexity

```text
O(N!)
```

- In the worst case, each row tries multiple valid columns.
- The branching factor decreases as queens are placed, leading to approximately `N!` possibilities.
- Each placement performs a safety check taking `O(N)` time, but the factorial term dominates the overall complexity.

### Space Complexity

```text
O(N)
```

- Recursive call stack stores one call per row.
- The board itself is required for the output and is not counted as extra auxiliary space.