# Approach

## Key Observation

For a subarray:

- Let:
  - `targetCount` = number of times target appears
  - `otherCount` = number of non-target elements

The target is majority if:

targetCount > subarray_length / 2


Since:

subarray_length = targetCount + otherCount


We get:

targetCount > (targetCount + otherCount) / 2


Simplifying:

targetCount > otherCount


So instead of checking majority directly, we only need to check whether:

targetCount > otherCount


---

# Brute Force Approach

Generate all possible subarrays using two loops.

For each subarray:

1. Count occurrences of target
2. Count occurrences of other elements
3. If `targetCount > otherCount`, increment answer

---

# Algorithm

1. Initialize `ans = 0`
2. Traverse all starting indices
3. For every starting index:
   - Initialize:
     - `targetCount = 0`
     - `otherCount = 0`
4. Extend subarray one element at a time
5. Update counts
6. If `targetCount > otherCount`
   - Increment answer
7. Return answer

---

# Time Complexity

Outer loop: `O(n)`

Inner loop: `O(n)`

Overall:

O(n²)


---

# Space Complexity

O(1)
