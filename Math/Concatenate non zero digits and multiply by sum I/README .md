# Approach

The idea is to traverse the digits of the given number from **right to left** (least significant digit to most significant digit) and construct the required number `x` while simultaneously calculating the sum of its non-zero digits.

Since extracting digits using `% 10` processes the number from the end, we cannot simply append digits to `x`. Instead, we maintain a variable `len` that represents the current place value (1, 10, 100, ...) in the newly formed number.

For each digit:

- Extract the last digit using `n % 10`.
- Add the digit to the front of `x` by computing:
  ```
  x = digit * len + x
  ```
- If the digit is non-zero, update `len` by multiplying it by `10` so that the next non-zero digit is placed in the correct position.
- Add the digit to the running sum.
- Remove the processed digit by dividing `n` by `10`.

Finally, return the product of the constructed number `x` and the sum of its digits.

---

## Algorithm

1. Initialize:
   - `x = 0` (stores the concatenated non-zero digits)
   - `sum = 0` (stores the sum of non-zero digits)
   - `len = 1` (represents the current place value)
2. While `n` is not `0`:
   - Extract the last digit using `digit = n % 10`.
   - Place the digit at the front of `x`:
     ```
     x = digit * len + x
     ```
   - If the digit is non-zero:
     - Multiply `len` by `10`.
   - Add the digit to `sum`.
   - Remove the last digit:
     ```
     n = n / 10
     ```
3. Return:
   ```
   x * sum
   ```

---


## Complexity Analysis

### Time Complexity

- **O(d)**

where `d` is the number of digits in `n`. Each digit is processed exactly once.

### Space Complexity

- **O(1)**

Only a few integer variables are used, so the extra space remains constant.