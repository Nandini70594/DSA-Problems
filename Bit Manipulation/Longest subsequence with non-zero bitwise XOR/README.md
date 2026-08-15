## Solution Approach

The maximum possible subsequence length is `n`, where `n` is the size of the array. Therefore, first check whether the entire array has a non-zero XOR.

Calculate the XOR of all elements using:

`xr ^= nums[i]`

XOR is performed bit by bit. The basic rules are:

- `0 ^ 0 = 0`
- `0 ^ 1 = 1`
- `1 ^ 0 = 1`
- `1 ^ 1 = 0`

If the XOR of the entire array is non-zero, all `n` elements form a valid subsequence, so the answer is `n`.

If the total XOR is zero, using all `n` elements is not valid. If there is at least one non-zero element, remove that element. Since the XOR of all elements is zero, the XOR of the remaining `n - 1` elements becomes equal to the removed element, which is non-zero. Therefore, a valid subsequence of length `n - 1` always exists.

If every element is zero, every possible subsequence also has XOR zero, so no valid subsequence exists and the answer is `0`.

## Algorithm

- Initialize `xr = 0`.
- Traverse the array and calculate the XOR of all elements.
- At the same time, check whether the array contains at least one non-zero element.
- If `xr != 0`, return `n`.
- If `xr == 0` and there is at least one non-zero element, return `n - 1`.
- If all elements are zero, return `0`.

## Complexity Analysis

Time Complexity: `O(n)`

Space Complexity: `O(1)`