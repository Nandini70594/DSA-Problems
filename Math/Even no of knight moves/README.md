# Approach

## Key Observation

A knight always moves from one color of a chessboard to the opposite color.

Therefore:

- Odd number of knight moves → different-colored squares
- Even number of knight moves → same-colored squares

The color of a square can be determined using:

(x + y) % 2

If the starting and target squares have the same result, they are the same color, meaning an even number of knight moves is possible.

## Algorithm

1. Calculate `(start[0] + start[1]) % 2`.
2. Calculate `(target[0] + target[1]) % 2`.
3. Compare the two values.
4. If they are equal, return `true`; otherwise, return `false`.

## Example

start = [0, 0]
target = [2, 2]

start:
(0 + 0) % 2 = 0

target:
(2 + 2) % 2 = 0

Both squares have the same color, so the answer is true.

## Complexity

- Time: O(1)
- Space: O(1)