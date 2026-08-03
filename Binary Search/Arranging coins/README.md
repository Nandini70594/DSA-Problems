# Approach

The number of coins required to build `k` complete rows is:

```text
k × (k + 1) / 2
```

We need to find the **largest** value of `k` such that:

```text
k × (k + 1) / 2 <= n
```

Since the required number of coins increases as the number of rows increases, the answer space is **monotonic**. Once a value of `k` becomes impossible, every larger value is also impossible.

This makes the problem suitable for **Binary Search on the Answer**.

## Algorithm

1. Initialize `low = 0` and `high = n`.
2. Find the middle value `mid`.
3. Calculate the coins required for `mid` rows using:
   ```text
   mid × (mid + 1) / 2
   ```
4. If the required coins are less than or equal to `n`, store `mid` as a valid answer and search the right half.
5. Otherwise, search the left half.
6. Return the largest valid answer.

## Complexity

- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`