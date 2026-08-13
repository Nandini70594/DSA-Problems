## Approach

- Store all friends from `1` to `n` in a vector.
- Maintain `idx` to represent the index of the friend who will be eliminated.
- Maintain `size` to represent the current number of friends remaining.
- Initially, `idx = 0`, representing friend `1`.
- Calculate the index of the next friend to eliminate using:
  `idx = (idx + k - 1) % size`
- Remove the eliminated friend by shifting all elements after `idx` one position to the left.
- Decrease `size` after every elimination.
- Continue until only one friend remains.
- The remaining element at `people[0]` is the winner.

## Complexity

**Time Complexity:** `O(n²)`

The elimination process runs `n` times, and shifting the elements after each elimination can take up to `O(n)` time.

**Space Complexity:** `O(n)`

The vector stores all `n` friends.