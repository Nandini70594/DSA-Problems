# 168. Excel Sheet Column Title

## Problem Statement

Given an integer `columnNumber`, return its corresponding column title as it appears in an Excel sheet.

For example:

```
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28
...
```

### Example 1

**Input:**
```text
columnNumber = 1
```

**Output:**
```text
"A"
```

### Example 2

**Input:**
```text
columnNumber = 28
```

**Output:**
```text
"AB"
```

### Example 3

**Input:**
```text
columnNumber = 701
```

**Output:**
```text
"ZY"
```

## Constraints

- `1 <= columnNumber <= 2^31 - 1`