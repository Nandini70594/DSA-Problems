# Approach

1. Sort the array.
2. Find the last two elements.
3. Compute:
   (largest - 1) × (secondLargest - 1)
4. Return the result.

## Complexity Analysis

- **Time Complexity:** O(n log n)
  - Sorting the array takes O(n log n).

- **Space Complexity:** O(1)
  - No extra data structures are used (excluding the sorting implementation).

## Note

A more optimal solution exists that scans the array once to find the two largest elements.

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

