# Reverse Bits

## Problem Statement

Given a 32-bit signed integer `n`, reverse its bits and return the resulting integer.

### Example 1

**Input:**

```text
n = 43261596
```

**Output:**

```text
964176192
```

**Explanation:**

| Integer | Binary |
|---------:|:---------------------------------|
| 43261596 | 00000010100101000001111010011100 |
| 964176192 | 00111001011110000010100101000000 |

---

### Example 2

**Input:**

```text
n = 2147483644
```

**Output:**

```text
1073741822
```

**Explanation:**

| Integer | Binary |
|---------:|:---------------------------------|
| 2147483644 | 01111111111111111111111111111100 |
| 1073741822 | 00111111111111111111111111111110 |

---

## Constraints

- `0 <= n <= 2³¹ - 2`
- `n` is even.