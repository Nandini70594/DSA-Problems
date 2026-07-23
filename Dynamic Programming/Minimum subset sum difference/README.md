# Solution Approach

## Intuition

Let:

- `S1` = Sum of the first subset
- `S2` = Sum of the second subset
- `TotalSum = S1 + S2`

We need to minimize:

```
|S1 - S2|
```

Since:

```
S2 = TotalSum - S1
```

Substituting,

```
|S1 - (TotalSum - S1)|
= |TotalSum - 2 × S1|
```

Thus, the problem reduces to finding a subset whose sum `S1` makes `|TotalSum - 2 × S1|` minimum.

---

## Approach

This problem is an extension of the **Subset Sum** problem.

1. Calculate the total sum of all array elements.
2. Construct the DP table using the Subset Sum approach.
3. The last row of the DP table represents all subset sums that are possible using all elements.
4. Traverse the last row from `0` to `TotalSum / 2` and store all achievable subset sums.
5. For every achievable subset sum `S1`, compute:

```
Difference = TotalSum - 2 × S1
```

6. Return the minimum difference obtained.

---

## Why traverse only till `TotalSum / 2`?

For every subset sum `S1`, there exists another subset with sum:

```
S2 = TotalSum - S1
```

Checking sums beyond `TotalSum / 2` results in duplicate differences.

Example:

```
TotalSum = 20

S1 = 3,  S2 = 17  → Difference = 14
S1 = 17, S2 = 3   → Difference = 14
```

Hence, it is sufficient to check subset sums only up to `TotalSum / 2`.

---

## Complexity Analysis

- **Time Complexity:** `O(n × TotalSum)`
  - Building the DP table takes `O(n × TotalSum)`.
  - Traversing the last row takes `O(TotalSum)`.

- **Space Complexity:** `O(n × TotalSum)`
  - The DP table stores `(n + 1) × (TotalSum + 1)` boolean values.