# Approach

## Core Idea

We need to find the minimum and maximum distance between critical points.

Suppose the critical points occur at positions:

`3, 5, 9, 12`

For the minimum distance, we only need to compare consecutive critical points:

`5 - 3 = 2`

`9 - 5 = 4`

`12 - 9 = 3`

So the minimum distance is `2`.

For the maximum distance, we only need the first and last critical points:

`12 - 3 = 9`

Therefore, we do not need to store all critical-point positions.

We only keep track of:

- `first` → position of the first critical point
- `previous` → position of the previous critical point
- `minDist` → minimum distance found so far
- `maxDist` → maximum distance found so far

## Detecting a Critical Point

For the current node, we need its previous node, current node, and next node.

A node is a local maximum if:

`curr->val > prevNode->val && curr->val > curr->next->val`

A node is a local minimum if:

`curr->val < prevNode->val && curr->val < curr->next->val`

Therefore, the complete condition is:

`(curr->val > prevNode->val && curr->val > curr->next->val) || (curr->val < prevNode->val && curr->val < curr->next->val)`

## Why `while (curr->next != nullptr)`?

The last node cannot be a critical point because it has no next node.

For example:

`3 -> 1 -> NULL`

When `curr` reaches `1`, `curr->next` is `nullptr`.

Therefore, the loop stops before trying to access `curr->next->val`.

This prevents a null-pointer error.

The problem guarantees at least 2 nodes, so `head` and `head->next` are valid.

## Tracking Critical Points

When we find the first critical point:

`first = pos`

We also set:

`previous = pos`

For every later critical point:

`minDist = min(minDist, pos - previous)`

`maxDist = pos - first`

Then update:

`previous = pos`

## Complexity

### Time Complexity

`O(n)`

We traverse the linked list only once.

### Space Complexity

`O(1)`

We only use a few variables regardless of the number of nodes.

