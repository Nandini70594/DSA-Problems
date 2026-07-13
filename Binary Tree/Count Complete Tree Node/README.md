# Approach

## Intuition

A complete binary tree has a special property:

- Every level except the last is completely filled.
- The last level is filled from left to right.

If a subtree is a **perfect binary tree**, we do not need to count every node individually.

A perfect binary tree satisfies:

- Height of the leftmost path = Height of the rightmost path.

The total number of nodes in a perfect binary tree is:

```
2^height - 1
```

If the heights are different, the subtree is not perfect, so recursively count the nodes in its left and right subtrees.

---

## Algorithm

1. If the current node is `NULL`, return `0`.
2. Compute the height of the leftmost path.
3. Compute the height of the rightmost path.
4. If both heights are equal:
   - The subtree is a perfect binary tree.
   - Return `(1 << height) - 1`.
5. Otherwise:
   - Count the current node.
   - Recursively count nodes in the left subtree.
   - Recursively count nodes in the right subtree.
6. Return the total count.

---

## Complexity Analysis

### Time Complexity

- Finding left and right heights takes `O(log n)`.
- This is done recursively for at most `O(log n)` levels.

Overall Time Complexity:

```
O((log n)^2)
```

### Space Complexity

```
O(log n)
```

due to the recursion stack.

---

## Key Insight

Instead of counting every node, first determine whether a subtree is a **perfect binary tree** by comparing the heights of its leftmost and rightmost paths.

- If the heights are equal, directly compute the number of nodes using the formula `(2^height - 1)`.
- Otherwise, recursively count the nodes in the left and right subtrees.

This optimization reduces the time complexity from `O(n)` to `O((log n)^2)`.