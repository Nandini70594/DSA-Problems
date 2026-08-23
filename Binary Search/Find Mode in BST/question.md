# Find Mode in Binary Search Tree

## Problem

Given the `root` of a Binary Search Tree (BST) with duplicates, return all the mode(s), i.e. the element(s) that occur most frequently in the tree.

If there is more than one mode, return them in any order.

The BST allows duplicate values:

- The left subtree contains values less than or equal to the node's value.
- The right subtree contains values greater than or equal to the node's value.
- Both subtrees must also be BSTs.

## Examples

### Example 1

Input:

root = [1,null,2,2]

Output:

[2]

Explanation:

The frequencies are:

1 → 1
2 → 2

Therefore, 2 is the mode.

### Example 2

Input:

root = [0]

Output:

[0]

Explanation:

There is only one element, so it is automatically the mode.

## Constraints

- The number of nodes is in the range [1, 10^4].
- -10^5 <= Node.val <= 10^5