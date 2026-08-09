# Solution Approach

We need to find the smallest number greater than or equal to `n` whose digit product is divisible by `t`.

### Steps

1. Start from `n`.
2. Calculate the product of all digits of the current number.
3. Check whether the digit product is divisible by `t`.
4. If it is divisible, return the current number.
5. Otherwise, increment the number and repeat.

### Important Point

Initialize `prod` to `1`, because we are calculating a product.

For example, for `16`:

`prod = 1`

`1 × 6 = 6`

Then check:

`6 % 3 == 0`

So `16` is the answer.

## Complexity

Let `d` be the number of digits.

- **Time Complexity:** `O(k × d)`, where `k` is the number of numbers checked.
- **Space Complexity:** `O(1)`.