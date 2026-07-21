# Approach

## Intuition

To count the number of set bits, examine each bit of the number from right to left.

The least significant bit (LSB) can be checked using the bitwise AND operator with `1`.

- If the last bit is `1`, increment the count.
- Shift the number one bit to the right to process the next bit.
- Repeat until the number becomes `0`.

---

## Algorithm

1. Initialize a variable `count` to `0`.
2. While `n` is greater than `0`:
   - Check if the last bit is set using `n & 1`.
   - If it is set, increment `count`.
   - Shift `n` one bit to the right.
3. Return `count`.

---

## Complexity Analysis

- **Time Complexity:** `O(number of bits)` = `O(32)` ≈ `O(1)`
- **Space Complexity:** `O(1)`