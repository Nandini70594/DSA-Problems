# Sum of GCD of Formed Pairs

## Problem Statement

You are given an integer array `nums` of length `n`.

Construct an array `prefixGcd` where for each index `i`:

- Let `mxi = max(nums[0], nums[1], ..., nums[i])`.
- `prefixGcd[i] = gcd(nums[i], mxi)`.

After constructing `prefixGcd`:

1. Sort `prefixGcd` in non-decreasing order.
2. Form pairs by taking the smallest unpaired element and the largest unpaired element.
3. Repeat until no more pairs can be formed.
4. For each pair, compute the GCD of the two elements.
5. If the array has an odd length, ignore the remaining middle element.

Return the sum of the GCDs of all formed pairs.

---

### Example 1

**Input**

```text
nums = [2,6,4]
```

**Output**

```text
2
```

**Explanation**

```
prefixGcd = [2,6,2]
Sorted = [2,2,6]

Pair:
gcd(2,6)=2

Answer = 2
```

---

### Example 2

**Input**

```text
nums = [3,6,2,8]
```

**Output**

```text
5
```

**Explanation**

```
prefixGcd = [3,6,2,8]
Sorted = [2,3,6,8]

Pairs:
gcd(2,8)=2
gcd(3,6)=3

Answer = 5
```

---

### Constraints

- `1 <= nums.length <= 10^5`
- `1 <= nums[i] <= 10^9`