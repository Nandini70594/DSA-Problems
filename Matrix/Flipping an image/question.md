# Flipping an Image

## Problem

Given an `n x n` binary matrix `image`, flip the image horizontally and then invert it.

- Flipping horizontally means reversing every row.
- Inverting means changing every `0` to `1` and every `1` to `0`.

Return the resulting matrix.

## Example

Input:

    image = [[1,1,0],
             [1,0,1],
             [0,0,0]]

Output:

    [[1,0,0],
     [0,1,0],
     [1,1,1]]

Explanation:

First reverse every row:

    [[0,1,1],
     [1,0,1],
     [0,0,0]]

Then invert every value:

    [[1,0,0],
     [0,1,0],
     [1,1,1]]

## Constraints

- `n == image.length`
- `n == image[i].length`
- `1 <= n <= 20`
- `image[i][j]` is either `0` or `1`.