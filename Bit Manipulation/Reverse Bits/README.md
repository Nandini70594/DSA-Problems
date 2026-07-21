# Approach

## Intuition

The least significant bit (LSB) of the given number should become the most significant bit (MSB) in the reversed number, the second least significant bit should become the second most significant bit, and so on.

To achieve this, process one bit at a time:

- Extract the last bit of the given number.
- Shift the answer to the left to make space for the next bit.
- Append the extracted bit to the answer.
- Remove the processed bit from the original number.

Repeat this process for all **32 bits**.

---

## Algorithm

1. Initialize `ans = 0`.
2. Repeat the following steps 32 times:
   - Shift `ans` left by one bit.
   - Extract the last bit of `n` using `n & 1`.
   - Add the extracted bit to `ans` using the OR operator.
   - Shift `n` right by one bit.
3. Return `ans`.

---

## Complexity Analysis

- **Time Complexity:** `O(32)` ≈ `O(1)`
- **Space Complexity:** `O(1)`