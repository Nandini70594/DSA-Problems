# Approach

## Idea

Maintain two arrays:

`arr1` and `arr2`.

The first element of `nums` goes into `arr1` and the second element goes into `arr2`.

For every remaining element, compare the **last elements** of `arr1` and `arr2`.

- If `arr1.back() > arr2.back()`, put the current element in `arr1`.
- Otherwise, put it in `arr2`.

Finally, concatenate `arr1` and `arr2`.

## 1-Indexed vs 0-Indexed

The problem says `nums` is **1-indexed**, but a C++ `vector` is **0-indexed**.

So:

`nums[1]` in the problem → `nums[0]` in C++

`nums[2]` in the problem → `nums[1]` in C++

`nums[3]` in the problem → `nums[2]` in C++

Therefore:

`arr1.push_back(nums[0]);`

`arr2.push_back(nums[1]);`

We then start processing from index `2`.

## Why use `.back()`?

We always need the **last elements** of `arr1` and `arr2`.

For example:

`arr1 = [5,3]`
`arr2 = [4]`

The elements we need to compare are `3` and `4`.

Instead of maintaining separate indices, we can directly use:

`arr1.back()`
`arr2.back()`

Therefore:

`if(arr1.back() > arr2.back())`

## Algorithm

1. Create `arr1`, `arr2`, and `result`.
2. Put `nums[0]` into `arr1`.
3. Put `nums[1]` into `arr2`.
4. Traverse `nums` from index `2` to `n-1`.
5. Compare the last elements of `arr1` and `arr2`.
6. Add the current element to the appropriate array.
7. Add all elements of `arr1` to `result`.
8. Add all elements of `arr2` to `result`.
9. Return `result`.

## Complexity Analysis

**Time Complexity:** `O(n)`

We traverse the input once and then traverse `arr1` and `arr2` once to construct the result.

**Space Complexity:** `O(n)`

The two arrays and the result together store all `n` elements.

