## Approach

1. **Calculate Digit Sum:** Traverse the array and calculate the sum of digits of each number using a while loop.

2. **Store Elements:** Store each element as a tuple containing its digit sum, original value, and original index.

3. **Sort the Elements:** Sort the tuples in ascending order. The digit sum is compared first, and if two elements have the same digit sum, their numerical values are compared.

4. **Track Original Positions:** Use the original indices to determine the correct position of each element after sorting.

5. **Count Minimum Swaps:** Use cycle decomposition to identify cycles in the permutation of elements. Mark each visited element to avoid processing a cycle more than once. For every cycle of length `k`, add `k - 1` to the swap count.

6. **Return the Result:** Return the total number of swaps required to arrange the array in the specified order.

### Time Complexity

- Calculating digit sums: O(n log M), where `M` is the maximum element.
- Sorting: O(n log n).
- Cycle decomposition: O(n).

**Overall Time Complexity:** O(n log n + n log M)

### Space Complexity

**O(n)** for storing tuples, positions, and visited elements.
