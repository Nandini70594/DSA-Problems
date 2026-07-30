# Binary Search Approach

## Intuition

The array is sorted in non-decreasing order.

We are **not** searching for the target itself.

Instead, we need the **smallest character greater than the target**, also known as the **Upper Bound**.

---

## Key Observation

Whenever we find a character greater than the target:

- It can be our answer.
- However, there may exist another valid character on its left that is even smaller.
- Therefore, we store the current answer and continue searching in the left half.

If the current character is less than or equal to the target:

- It cannot be the answer.
- Every character before it is also less than or equal to the target.
- So we search in the right half.

---

## Algorithm

1. Initialize:
   - `low = 0`
   - `high = n - 1`
   - `ans = letters[0]` (handles wrap-around case)

2. While `low <= high`:
   - Find the middle index.
   - If `letters[mid] > target`:
     - Store it as the answer.
     - Search the left half.
   - Otherwise:
     - Search the right half.

3. Return `ans`.

## Complexity Analysis

- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`
