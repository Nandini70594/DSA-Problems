# Approach

## Intuition

Instead of checking every number between `low` and `high`, generate only the numbers that can possibly have sequential digits.

A sequential number starts from a digit (`1` to `9`) and each next digit is exactly one greater than the previous digit.

For example:

```
12
123

23
234

34
345
```

There are only a limited number of such numbers, making this approach very efficient.

---

## Algorithm

1. Create an empty vector to store the answer.
2. Loop through every possible starting digit from `1` to `9`.
3. Initialize the current number with the starting digit.
4. Append the next consecutive digit while it is less than or equal to `9`.
5. After forming each new number:
   - If it lies between `low` and `high`, add it to the answer.
6. Sort the answer because numbers are generated based on their starting digit.
7. Return the answer.

---

## Complexity Analysis

**Time Complexity:** `O(1)`

- At most 36 sequential numbers can be generated.

**Space Complexity:** `O(1)`

- Ignoring the output array, only a few variables are used.

---

## Key Insight

Instead of iterating through every integer in the given range, directly generate all possible sequential digit numbers and keep only those that fall within the required range. Since the total number of valid sequential numbers is fixed, the solution runs in constant time.