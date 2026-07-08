# Approach

The constraints allow up to **10⁵** queries, so constructing the required number for every query separately would be too slow.

The key observation is that **only non-zero digits contribute to the final number**. Therefore, we first compress the original string by storing only its non-zero digits along with their original indices.

For example,

```
Original String : 1 0 2 0 3 0 0 4
Digits          : 1 2 3 4
Positions       : 0 2 4 7
```

Now every query can be converted into a continuous range inside the `digits` array using binary search.

---

## Preprocessing

### 1. Store Non-Zero Digits

Traverse the string once.

- Store every non-zero digit in `digits`.
- Store its original index in `positions`.

---

### 2. Prefix Sum of Digits

Build a prefix sum array to quickly compute the sum of digits for any range.

```
prefixSum[i + 1] = prefixSum[i] + digits[i]
```

Then,

```
sum = prefixSum[right + 1] - prefixSum[left]
```

can be obtained in **O(1)**.

---

### 3. Powers of 10

Precompute powers of 10 modulo `10^9 + 7`.

```
power10[i] = (power10[i - 1] × 10) % MOD
```

These are used while extracting the concatenated number.

---

### 4. Prefix Number

Construct the number formed by the prefix of the `digits` array.

```
prefixNum[i + 1] = prefixNum[i] × 10 + digits[i]
```

Example:

```
Digits

1 2 3 4

Prefix Numbers

0
1
12
123
1234
```

Using this array, the concatenated number for any range can be obtained in constant time.

---

## Processing Each Query

For every query `[l, r]`:

### Step 1

Find the first non-zero digit whose original index is greater than or equal to `l`.

```
left = lower_bound(...)
```

### Step 2

Find the last non-zero digit whose original index is less than or equal to `r`.

```
right = upper_bound(...) - 1
```

If `left > right`, there are no non-zero digits in the range, so the answer is `0`.

---

### Step 3

Extract the concatenated number.

```
length = right - left + 1

x =
prefixNum[right + 1]
-
prefixNum[left] × power10[length]
```

Modulo arithmetic is applied to avoid overflow.

---

### Step 4

Compute the digit sum.

```
sum =
prefixSum[right + 1]
-
prefixSum[left]
```

---

### Step 5

Return

```
answer = (x × sum) % MOD
```

---

# Algorithm

1. Traverse the string once.
2. Store all non-zero digits and their original positions.
3. Build:
   - Prefix sum array
   - Prefix number array
   - Powers of 10 array
4. For each query:
   - Use binary search to locate the required range.
   - If no non-zero digit exists, return `0`.
   - Compute the concatenated number using the prefix number array.
   - Compute the digit sum using the prefix sum array.
   - Return `(x × sum) % MOD`.

---

# Complexity Analysis

### Time Complexity

- Preprocessing: **O(n)**
- Each Query:
  - Binary Search: **O(log n)**
  - Remaining computations: **O(1)**

Overall:

```
O(n + q log n)
```

where:

- `n` = length of the string
- `q` = number of queries

---

### Space Complexity

```
O(n)
```

Extra space is used for:

- `digits`
- `positions`
- `prefixSum`
- `prefixNum`
- `power10`