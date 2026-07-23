# Solution Approach

## Intuition

A perfect square is a number that can be written as:

```
x × x = num
```

Instead of checking every possible value of `x`, we can use **Binary Search** because the square of a number increases monotonically as the number increases.

The possible value of `x` lies between `1` and `num`.

---

## Algorithm

1. Initialize two pointers:
   - `low = 1`
   - `high = num`
2. While `low <= high`:
   - Find the middle value `mid`.
   - Compute `mid × mid`.
   - If `mid × mid == num`, return `true`.
   - If `mid × mid < num`, search the right half.
   - Otherwise, search the left half.
3. If the loop ends without finding a perfect square, return `false`.

---

## Complexity Analysis

- **Time Complexity:** `O(log n)`
  - The search space is halved in every iteration.

- **Space Complexity:** `O(1)`
  - Only a few variables are used, regardless of the input size.

---

## Note

Since `num` can be as large as `2³¹ - 1`, computing `mid × mid` using `int` may overflow. Therefore, use `long long` while calculating the square.