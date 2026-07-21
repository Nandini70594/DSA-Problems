# Number of 1 Bits

## Problem Statement

Given a positive integer `n`, return the number of set bits (bits with value `1`) in its binary representation. This count is also known as the **Hamming Weight**.

### Example 1

**Input:**

```text
n = 11
```

**Output:**

```text
3
```

**Explanation:**

The binary representation of `11` is:

```text
1011
```

It contains **3** set bits.


---

### Example 2

**Input:**

```text
n = 2147483645
```

**Output:**

```text
30
```

**Explanation:**

The binary representation is:

```text
1111111111111111111111111111101
```

It contains **30** set bits.

---

## Constraints

- `1 <= n <= 2³¹ - 1`