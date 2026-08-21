## Solution Approach

Use two pointers:

- `low = 0`
- `high = n`

The permutation must contain every number from `0` to `n` exactly once.

- If `s[i] == 'I'`, choose the smallest available number `low` and increment `low`.
- If `s[i] == 'D'`, choose the largest available number `high` and decrement `high`.
- After processing all characters, exactly one number remains. Add it to the answer.

### Why does this work?

For `'I'`, we need:

`current < next`

Choosing the smallest available number leaves larger numbers available for the next position.

For `'D'`, we need:

`current > next`

Choosing the largest available number guarantees that the next available number is smaller.

Since `low` only increases and `high` only decreases, every number from `0` to `n` is used exactly once, so there are no duplicates.

## Complexity Analysis

Time Complexity: O(n)

Space Complexity: O(n), where `n + 1` is the size of the answer array.