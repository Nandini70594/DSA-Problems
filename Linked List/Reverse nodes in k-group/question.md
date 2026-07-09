# Reverse Nodes in k-Group

## Problem Statement

Given the head of a linked list, reverse the nodes of the list `k` at a time and return the modified list.

- `k` is a positive integer and is less than or equal to the length of the linked list.
- If the number of nodes is not a multiple of `k`, then the remaining nodes at the end should remain in their original order.
- You may not modify the values stored in the nodes; only the node pointers may be changed.

---

## Examples

### Example 1

**Input**
```text
head = [1,2,3,4,5], k = 2
```

**Output**
```text
[2,1,4,3,5]
```

---

### Example 2

**Input**
```text
head = [1,2,3,4,5], k = 3
```

**Output**
```text
[3,2,1,4,5]
```

---

## Constraints

- The number of nodes in the list is `n`.
- `1 <= k <= n <= 5000`
- `0 <= Node.val <= 1000`