# Approach

There are two possible approaches to solve this problem.

---

# Approach 1: Simulation + GCD

## Idea

1. Compute the sum of the first `n` odd numbers.
2. Compute the sum of the first `n` even numbers.
3. Find the GCD of both sums using Euclid's Algorithm (or the built-in `gcd()` function).

---

## Algorithm

1. Initialize:

   - `sumOdd = 0`
   - `sumEven = 0`
   - `odd = 1`
   - `even = 2`

2. Repeat `n` times:
   - Add `odd` to `sumOdd`.
   - Add `even` to `sumEven`.
   - Increase `odd` by 2.
   - Increase `even` by 2.

3. Return `gcd(sumOdd, sumEven)`.

---

## Time Complexity

- Computing sums: **O(n)**
- GCD: **O(log(min(sumOdd, sumEven)))**

Overall:

```text
O(n)
```

---

## Space Complexity

```text
O(1)
```

---

# Approach 2: Mathematical Observation (Optimal)

## Observation

The sum of the first `n` odd numbers is:

```text
1 + 3 + 5 + ... = n²
```

The sum of the first `n` even numbers is:

```text
2 + 4 + 6 + ... = n(n + 1)
```

Therefore,

```text
GCD(n², n(n+1))
```

Factor out `n`:

```text
= n × GCD(n, n+1)
```

Since two consecutive integers are always coprime,

```text
GCD(n, n+1) = 1
```

Hence,

```text
GCD(n², n(n+1)) = n
```

So, the answer is simply:

```cpp
return n;
```

---

## Example

For `n = 5`

```text
sumOdd = 25
sumEven = 30

GCD(25,30)
= GCD(5²,5×6)
= 5 × GCD(5,6)
= 5 × 1
= 5
```

---

## Time Complexity

```text
O(1)
```

---

## Space Complexity

```text
O(1)
```

---

# Comparison

| Approach | Time | Space |
|----------|------|-------|
| Simulation + GCD | O(n) | O(1) |
| Mathematical Observation | O(1) | O(1) |

The mathematical approach is the optimal solution because it directly uses the known formulas for the sums of odd and even numbers and properties of the Greatest Common Divisor.