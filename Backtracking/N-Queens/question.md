# N-Queens

## Problem Statement

The n-queens puzzle is the problem of placing `n` queens on an `n × n` chessboard such that no two queens attack each other.

Given an integer `n`, return all distinct solutions to the n-queens puzzle. You may return the solutions in any order.

Each solution contains a distinct board configuration where:

- `'Q'` represents a queen.
- `'.'` represents an empty cell.

---

## Examples

### Example 1

**Input**

```text
n = 4
```

**Output**

```text
[
 [".Q..","...Q","Q...","..Q."],
 ["..Q.","Q...","...Q",".Q.."]
]
```

**Explanation**

There are two distinct valid arrangements of 4 queens on a `4 × 4` chessboard.

---

### Example 2

**Input**

```text
n = 1
```

**Output**

```text
[
 ["Q"]
]
```

---

## Constraints

- `1 <= n <= 9`