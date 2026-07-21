# Approach

## Intuition

If the total sum of all elements is **odd**, it is impossible to divide the array into two subsets with equal sum.

If the total sum is **even**, then each subset must have a sum equal to **totalSum / 2**.

Thus, the problem reduces to checking whether there exists a subset whose sum is equal to **totalSum / 2**.

---

## Algorithm

1. Compute the total sum of all elements.
2. If the total sum is odd, return `false`.
3. Otherwise, set the target as `totalSum / 2`.
4. Use Dynamic Programming to solve the Subset Sum problem for the target sum.
5. Create a DP table `dp[i][j]` where:
   - `i` represents the first `i` elements.
   - `j` represents the target sum.
6. Initialize the DP table:
   - `dp[i][0] = true` for all `i`, since a sum of `0` is always possible.
   - `dp[0][j] = false` for all `j > 0`, since no positive sum can be formed using zero elements.
7. Fill the DP table:
   - If the current element is less than or equal to the target sum:
     - Include the current element or exclude it.
   - Otherwise, exclude the current element.
8. Return `dp[n][target]`.

---

## DP State

Let:

```text
dp[i][j]
```

be `true` if a subset with sum `j` can be formed using the first `i` elements; otherwise, `false`.

---

## Base Cases

- `dp[i][0] = true`
- `dp[0][j] = false` for `j > 0`

---

## Transition

If the current element can be included:

```text
dp[i][j] = dp[i-1][j] || dp[i-1][j - nums[i-1]]
```

Otherwise:

```text
dp[i][j] = dp[i-1][j]
```

---

## Complexity Analysis

- **Time Complexity:** `O(n × target)`
- **Space Complexity:** `O(n × target)`

where:

- `n` = number of elements
- `target = totalSum / 2`