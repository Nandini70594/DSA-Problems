# Approach

## Idea

We need to perform two operations:

1. Reverse every row.
2. Invert every element.

Instead of doing these separately, both operations can be performed together using two pointers.

For every row:

- `l` starts from the left.
- `r` starts from the right.
- Swap the two elements.
- At the same time, invert both elements.

For binary values, inversion can be done using:

    value = value == 0 ? 1 : 0;

## Example

For:

    [1,1,0]

Take:

    l = 0, r = 2

The values are `1` and `0`.

After swapping and inverting:

    [1,1,0]
     ↑   ↑
     1   0

becomes:

    [1,0,0]

Then move:

    l++
    r--

This continues until the two pointers meet.

If `l == r`, the middle element only needs to be inverted because there is no different element to swap with.

## Complexity

Time Complexity: `O(n²)`

Every element of the matrix is processed once.

Space Complexity: `O(1)`

The matrix is modified in-place.