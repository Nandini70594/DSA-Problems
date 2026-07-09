# Approach

The solution simulates the behavior of the `atoi` function by processing the string character by character.

## Algorithm

1. Initialize an index `i`, a `sign` variable (`+1` by default), and a variable `num` to store the result.
2. Skip all leading whitespace characters.
3. Check if the current character is `'+'` or `'-'`.
   - If `'-'`, set `sign = -1`.
   - Move to the next character.
4. Read consecutive digits until a non-digit character is encountered.
5. Before appending each digit, check if adding it would overflow the 32-bit signed integer range.
   - If overflow occurs:
     - Return `INT_MAX` for positive numbers.
     - Return `INT_MIN` for negative numbers.
6. Update the number using:
   ```cpp
   num = num * 10 + digit;
   ```
7. Return `sign * num`.

---

# Overflow Handling

Before updating the number, check:

```cpp
if (num > INT_MAX / 10 ||
    (num == INT_MAX / 10 && digit > 7))
```

If this condition is true:

- Return `INT_MAX` if the number is positive.
- Return `INT_MIN` if the number is negative.

This prevents integer overflow while constructing the number.

---

# Correctness

- Leading spaces are ignored.
- An optional sign is handled correctly.
- Digits are processed until the first non-digit character.
- Leading zeros naturally do not affect the result.
- Values exceeding the 32-bit signed integer range are clamped to the nearest valid limit.

---

# Complexity Analysis

- **Time Complexity:** `O(n)`
  - Each character is processed at most once.

- **Space Complexity:** `O(1)`
  - Only a few variables are used regardless of the input size.