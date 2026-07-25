# Approaches

## Approach 1: Brute Force

### Idea

1. Extract all digits of the number using `% 10` and `/ 10`.
2. Store the digits in a vector.
3. Compare every possible pair of digits.
4. Compute their product.
5. Return the maximum product obtained.

### Time Complexity

- Digit Extraction: **O(d)**
- Pair Comparison: **O(d²)**

Overall: **O(d²)**

where `d` is the number of digits.

### Space Complexity

**O(d)**

for storing the digits.

---

## Approach 2: Optimal (Two Largest Digits)

### Idea

The maximum product will always be obtained using the two largest digits.

1. Traverse all digits once.
2. Keep track of the largest and second largest digits.
3. Return their product.

### Time Complexity

**O(d)**

where `d` is the number of digits.

### Space Complexity

**O(1)**

No extra data structure is used.