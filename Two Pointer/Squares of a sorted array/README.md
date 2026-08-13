# Squares of a Sorted Array

## Approach 1: Square and Sort

The simplest approach is to square every element of the array and then sort the resulting values.

For example, for `[-4,-1,0,3,10]`, squaring gives `[16,1,0,9,100]`. We can then use `sort()` to obtain `[0,1,9,16,100]`.

This approach is easy to implement, but the sorting operation takes `O(n log n)` time.

**Time Complexity:** `O(n log n)`

**Space Complexity:** `O(1)` extra space when sorting in-place.

## Approach 2: Two Pointers

The input array is already sorted, which we can use to avoid sorting the squared values.

After squaring, the order may be disturbed because negative values become positive. However, the **largest square will always come from one of the two ends** of the original array.

For example, consider `[-7,-3,-1,2,4,6]`.

The two ends are `-7` and `6`. Their absolute values are `7` and `6`, so `(-7)^2 = 49` is larger than `6^2 = 36`.

Therefore, we maintain two pointers:

- `left` at the beginning of the array
- `right` at the end of the array

We compare `abs(nums[left])` and `abs(nums[right])`.

Whichever is larger gives us the **largest remaining square**. We place that square at the end of the answer array and move the corresponding pointer.

We maintain another pointer `last` starting from the last position of the answer array. Since we are finding the largest values first, we fill the answer from **right to left**.

For example:

`nums = [-7,-3,-1,2,4,6]`

Initially, compare `abs(-7)` and `abs(6)`. Since `7 > 6`, place `49` at the last position and move `left`.

Then compare the new left and right values again. Continue until all elements have been processed.

Every element is considered exactly once, so no separate sorting operation is required.

**Time Complexity:** `O(n)`

**Space Complexity:** `O(n)` for the answer array.

## Why the Two-Pointer Approach Is Better

The Square + Sort approach takes `O(n log n)` because of the sorting step.

The Two-Pointer approach takes `O(n)` because it uses the fact that the input is already sorted and directly constructs the result in sorted order.

Thus, the two-pointer approach is better in terms of time complexity.

| Approach | Time Complexity | Space Complexity |
|---|---|---|
| Square + Sort | `O(n log n)` | `O(1)` extra |
| Two Pointers | `O(n)` | `O(n)` |

## Key Learning

- Do not ignore useful properties of the input, such as an already sorted array.
- Squaring can disturb the order of a sorted array when negative numbers are present.
- The largest square must come from one of the two ends.
- Two pointers can be used to compare both ends efficiently.
- When selecting the largest elements first, fill the result array from right to left.
- The two-pointer approach eliminates the `O(n log n)` sorting step and achieves `O(n)` time.