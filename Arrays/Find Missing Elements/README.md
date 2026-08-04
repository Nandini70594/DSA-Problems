# Approach

## Intuition

Since the smallest and largest elements of the original range are guaranteed to be present, we first determine these two values.

Then, we iterate through every integer between the smallest and largest values. For each number, we check whether it exists in the array. If it does not, we add it to the answer.

---

## Algorithm

1. Initialize `smallest` and `largest` with the first element.
2. Traverse the array once to find:
   - Minimum element (`smallest`)
   - Maximum element (`largest`)
3. Create an empty answer vector.
4. Iterate from `smallest` to `largest` (inclusive).
5. For each integer:
   - Use `count()` to check if it exists in the array.
   - If `count()` returns `0`, add the number to the answer.
6. Return the answer vector.

---

## Complexity Analysis

- Finding minimum and maximum: **O(n)**
- Checking each number using `count()`: **O(n)** per number
- Total Time Complexity: **O(n × (max - min + 1))**

Since the constraints are small (`nums[i] <= 100`), this solution is efficient enough.

**Space Complexity:** **O(1)** (excluding the output vector).