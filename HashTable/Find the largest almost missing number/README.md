## Approach

Use a frequency map to store how many times each element occurs in the array.

There are three cases:

### Case 1: k == 1

Every subarray contains exactly one element. Therefore, an element appears in exactly one subarray if and only if its frequency in `nums` is 1.

Find the largest element with frequency 1.

### Case 2: k == n

There is only one subarray, which is the entire array. Every distinct element appears in exactly one subarray, regardless of how many times it occurs inside that subarray.

Therefore, return the largest element in `nums`.

### Case 3: 1 < k < n

Only the first and last elements can appear in exactly one subarray of size `k`.

- `nums[0]` can be almost missing if its frequency is 1.
- `nums[n-1]` can be almost missing if its frequency is 1.
- All other elements occur in more than one size-`k` subarray.

Check both endpoints and return the larger one whose frequency is 1. If neither qualifies, return `-1`.

## Complexity

Time Complexity: O(n)

Space Complexity: O(n)

where `n` is the size of `nums`.