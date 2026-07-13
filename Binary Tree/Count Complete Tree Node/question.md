# Count Complete Tree Nodes

## Problem Statement

Given the root of a **complete binary tree**, return the total number of nodes in the tree.

A **complete binary tree** is a binary tree in which every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible.

Your algorithm should run in **less than O(n)** time complexity.

---

## Example 1

**Input**

```
root = [1,2,3,4,5,6]
```

**Output**

```
6
```

---

## Example 2

**Input**

```
root = []
```

**Output**

```
0
```

---

## Example 3

**Input**

```
root = [1]
```

**Output**

```
1
```

---

## Constraints

- The number of nodes in the tree is in the range `[0, 5 * 10^4]`.
- `0 <= Node.val <= 5 * 10^4`
- The tree is guaranteed to be a **complete binary tree**.