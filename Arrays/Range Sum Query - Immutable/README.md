# Approach

## Intuition

Since the problem requires answering multiple range sum queries on the same array, calculating the sum by traversing the range every time would be inefficient.

Instead, preprocess the array using a **Prefix Sum** array. This allows each query to be answered in constant time.

---

## Algorithm

1. Create a prefix sum array of size `n + 1`.
2. Initialize `prefix[0] = 0`.
3. Traverse the original array and compute cumulative sums:
   - `prefix[i + 1] = prefix[i] + nums[i]`
4. For each query `(left, right)`:
   - Return `prefix[right + 1] - prefix[left]`.

---

## Complexity Analysis

- **Constructor Time Complexity:** `O(n)`
- **sumRange() Time Complexity:** `O(1)`
- **Space Complexity:** `O(n)`

---

## Data Structures Used

- Vector

---

## Key Concept

Prefix Sum is a preprocessing technique that stores cumulative sums of an array. It is particularly useful when the array remains unchanged and multiple range sum queries need to be answered efficiently. By preprocessing once in `O(n)` time, each query can be answered in `O(1)` time.