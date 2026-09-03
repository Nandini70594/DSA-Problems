# Construct Uniform Parity Array II

## Problem
You are given an array `nums1` of `n` distinct integers.

You need to construct another array `nums2` of the same length such that all elements of `nums2` have the same parity — either all odd or all even.

For every index `i`, exactly one of the following operations can be performed:

1. Keep the element unchanged:
   `nums2[i] = nums1[i]`

2. Subtract another element:
   `nums2[i] = nums1[i] - nums1[j]`

   where `j != i` and:
   `nums1[i] - nums1[j] >= 1`.

Return `true` if it is possible to construct such an array, otherwise return `false`.

## Examples

### Example 1
Input:
`nums1 = [1,4,7]`

Output:
`true`

Explanation:
- `1` is already odd.
- `4 - 1 = 3`, which is odd.
- `7` is already odd.

Therefore, `nums2 = [1,3,7]`, and all elements are odd.

### Example 2
Input:
`nums1 = [2,3]`

Output:
`false`

There is no valid way to make both elements have the same parity.

### Example 3
Input:
`nums1 = [4,6]`

Output:
`true`

Both elements are already even, so:
`nums2 = [4,6]`.

## Constraints
- `1 <= n <= 10^5`
- `1 <= nums1[i] <= 10^9`
- All elements of `nums1` are distinct.