# Solution Approach

The expected order is simply the sorted version of the given `heights` array.

### Steps

1. Create a copy of `heights` called `expected`.
2. Sort `expected`.
3. Compare `heights[i]` with `expected[i]` for every index.
4. If they are different, increment `count`.
5. Return `count`.

## Complexity

- Time Complexity: `O(n log n)` due to sorting.
- Space Complexity: `O(n)` for the `expected` array.