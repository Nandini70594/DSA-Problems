## Approaches

### 1. Brute Force

Traverse every element of the matrix and count the negative values.

- **Time Complexity:** `O(m × n)`
- **Space Complexity:** `O(1)`

---

### 2. Binary Search

Since every row is sorted in non-increasing order, perform binary search on each row to find the first negative element.

- **Time Complexity:** `O(m log n)`
- **Space Complexity:** `O(1)`

---

### 3. Two Pointer (Optimal)

Start from the top-right corner of the matrix.

- If the current element is negative, then all elements below it in the same column are also negative.
- Count all of them at once and move left.
- Otherwise, move down.

- **Time Complexity:** `O(m + n)`
- **Space Complexity:** `O(1)`

---

## Key Observation

Because the matrix is sorted both row-wise and column-wise:

- Moving left decreases or keeps the value the same.
- Moving down also decreases or keeps the value the same.

This property allows us to eliminate an entire row or column in every step, resulting in an `O(m + n)` solution.

---

## Complexity Comparison

| Approach | Time | Space |
|----------|------|-------|
| Brute Force | O(m × n) | O(1) |
| Binary Search | O(m log n) | O(1) |
| Two Pointer | O(m + n) | O(1) |