# Approach

## Intuition

Assigning `'+'` and `'-'` signs divides the array into two subsets:

- `S1` → Elements assigned `'+'`
- `S2` → Elements assigned `'-'`

We have:

```text
S1 - S2 = target
S1 + S2 = totalSum
```

Adding both equations:

```text
2 × S1 = totalSum + target
```

Therefore,

```text
S1 = (totalSum + target) / 2
```

The problem is transformed into:

> **Count the number of subsets having sum = (totalSum + target) / 2.**

---

## Invalid Cases

Return `0` if:

- `abs(target) > totalSum`
- `(totalSum + target)` is odd

In either case, no valid partition exists.

---

## Dynamic Programming

Let:

```text
dp[i][j]
```

represent the number of subsets from the first `i` elements whose sum is `j`.

### Initialization

Initialize the DP table with all zeros and set:

```cpp
dp[0][0] = 1;
```

Unlike the standard Count of Subsets problem, we **do not initialize the entire first column to 1** because the array may contain `0`.

If zeros are present, there are multiple ways to obtain sum `0`, and these should be computed by the DP recurrence.

---

## Transition

For every element:

- If the current element can be included:

```text
dp[i][j] = dp[i-1][j] + dp[i-1][j-currentElement]
```

- Otherwise:

```text
dp[i][j] = dp[i-1][j]
```

---

## Why Only `dp[0][0] = 1`?

Consider:

```text
nums = [0,0]
target = 0
```

There are four valid expressions:

```text
+0 +0
+0 -0
-0 +0
-0 -0
```

Hence, the answer is `4`.

If the first column is initialized to `1`, the DP incorrectly counts only one way.

Initializing only:

```cpp
dp[0][0] = 1;
```

allows the recurrence to compute:

```text
dp[0][0] = 1
dp[1][0] = 2
dp[2][0] = 4
```

which correctly accounts for zeros.

---

## Complexity Analysis

- **Time Complexity:** `O(n × requiredSum)`
- **Space Complexity:** `O(n × requiredSum)`