# Approach

This solution uses a **Monotonic Increasing Stack** to efficiently find the nearest smaller bar on both the left and right side of every histogram bar.

For each bar, the largest rectangle with that bar as the minimum height extends from the first smaller bar on the left to the first smaller bar on the right.

---

# Algorithm

### Step 1: Find Next Smaller Element (Right)

- Traverse the array from right to left.
- Maintain a monotonic increasing stack of indices.
- Remove all bars that are greater than or equal to the current bar.
- The remaining top of the stack represents the nearest smaller element on the right.
- If no such element exists, store `n`.

---

### Step 2: Find Previous Smaller Element (Left)

- Clear the stack.
- Traverse the array from left to right.
- Again maintain a monotonic increasing stack.
- Remove all bars greater than or equal to the current bar.
- The remaining top gives the nearest smaller element on the left.
- If none exists, store `-1`.

---

### Step 3: Compute Maximum Area

For every bar:

```text
Width = RightSmaller - LeftSmaller - 1
Area = Height × Width
```

Update the maximum area obtained.

---

# Why This Works

For every histogram bar:

- The previous smaller element marks the left boundary.
- The next smaller element marks the right boundary.
- Every bar between these boundaries has a height greater than or equal to the current bar.
- Therefore, the current bar can extend across the entire width, producing the maximum rectangle with that height.

Computing this for every bar guarantees the largest rectangle is found.

---

# Complexity Analysis

Let `n` be the number of histogram bars.

### Time Complexity

```text
O(n)
```

- Every index is pushed and popped from the stack at most once while computing left and right boundaries.
- Computing the final answer takes one additional traversal.

### Space Complexity

```text
O(n)
```

- Extra arrays for previous and next smaller indices.
- Stack used during traversal.