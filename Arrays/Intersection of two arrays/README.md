# Approach

## Intuition

Since only unique common elements are required, a hash set is an efficient choice.

Store all elements of the first array in a set. Then traverse the second array. If an element exists in the set, it belongs to the intersection. Add it to the answer and remove it from the set to avoid duplicates.

## Algorithm

1. Insert all elements of `nums1` into an unordered set.
2. Traverse `nums2`.
3. If the current element exists in the set:
   - Add it to the answer.
   - Remove it from the set.
4. Return the answer.

## Complexity Analysis

- **Time Complexity:** `O(n + m)`
- **Space Complexity:** `O(n)`

where:

- `n = nums1.size()`
- `m = nums2.size()`

## Data Structures Used

- Unordered Set
- Vector