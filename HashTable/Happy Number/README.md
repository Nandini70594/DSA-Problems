# Approach

## Intuition

A happy number is obtained by repeatedly replacing a number with the sum of the squares of its digits.

There are only two possible outcomes:

- The sequence eventually reaches `1`, making it a happy number.
- The sequence starts repeating numbers, forming an infinite cycle that never reaches `1`.

To detect such a cycle efficiently, we store every number we encounter in an `unordered_set`. If a number appears again, we know we've entered a loop.

---

## Algorithm

1. Create an empty `unordered_set` to store visited numbers.
2. While the current number is not `1`:
   - If the number already exists in the set, return `false`.
   - Insert the current number into the set.
   - Replace the number with the sum of the squares of its digits.
3. If the number becomes `1`, return `true`.

---

## Complexity Analysis

- **Time Complexity:** `O(k)`
  - `k` is the number of transformations before reaching `1` or detecting a cycle.

- **Space Complexity:** `O(k)`
  - An `unordered_set` stores all previously visited numbers to detect cycles.

---

## Key Idea

The solution uses a hash set to keep track of previously visited numbers. If the current number has already been seen, the sequence has entered a cycle and can never reach `1`. Otherwise, if the sequence reaches `1`, the number is happy.