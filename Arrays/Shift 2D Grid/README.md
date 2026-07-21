## Approach

Instead of simulating the shift operation `k` times, treat the 2D grid as a **1D array**.

### Step 1: Convert 2D Index to 1D Index

For an element at position `(i, j)`,

```cpp
index = i * n + j;
```

where `n` is the number of columns.

Example:

```
Grid:

1 2 3
4 5 6
7 8 9

1D Representation:

Index : 0 1 2 3 4 5 6 7 8
Value : 1 2 3 4 5 6 7 8 9
```

---

### Step 2: Find the New Position

After shifting `k` times,

```cpp
newIndex = (index + k) % (m * n);
```

The modulo operation ensures that if the index goes beyond the last position, it wraps around to the beginning.

---

### Step 3: Convert Back to 2D Index

The new row and column are:

```cpp
row = newIndex / n;
col = newIndex % n;
```

Place the current element at `(row, col)` in the answer grid.
