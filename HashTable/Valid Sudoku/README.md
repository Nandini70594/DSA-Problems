# Approach

## Intuition

We do **not** need to solve the Sudoku.

The task is only to verify whether the numbers already present violate any Sudoku rule.

For every filled cell, we must ensure:

- The number has not appeared before in the same row.
- The number has not appeared before in the same column.
- The number has not appeared before in the same 3 × 3 sub-box.

---

## Data Structures Used

We maintain three collections of sets:

- `rows[9]` → Stores numbers present in each row.
- `cols[9]` → Stores numbers present in each column.
- `boxes[9]` → Stores numbers present in each 3 × 3 sub-box.

Each set stores characters (`'1'`–`'9'`) already encountered.

---

## Algorithm

1. Create three vectors of unordered sets for rows, columns, and boxes.
2. Traverse every cell of the board.
3. Ignore empty cells (`'.'`).
4. Compute the corresponding box index:

```cpp
box = (row / 3) * 3 + (col / 3);
```

5. Check whether the current number already exists in:
   - the current row,
   - the current column,
   - the corresponding 3 × 3 box.
6. If found in any of them, return **false**.
7. Otherwise, insert the number into all three sets.
8. If the entire board is traversed without finding duplicates, return **true**.

---

## Box Number Formula

The Sudoku board contains nine 3 × 3 boxes.

The box index is calculated as:

```cpp
box = (row / 3) * 3 + (col / 3);
```

## Complexity Analysis

### Time Complexity

- Single traversal of the board.

**O(9 × 9) = O(81)**

Since the board size is fixed, it is effectively **O(1)**.

---

### Space Complexity

Three vectors of nine sets each are used.

Maximum stored elements are bounded by the board size.

**O(81) = O(1)**

---

## Key Learning

- Use hash sets to detect duplicates efficiently.
- Traverse the board only once.
- Compute the corresponding 3 × 3 box using integer division.
- Validate only the filled cells; empty cells are ignored.