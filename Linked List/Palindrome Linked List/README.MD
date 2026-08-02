# Approach 1: Using Stack

## Idea

Store all node values in a stack while traversing the linked list.

Traverse the list again from the beginning. For each node, compare its value with the top element of the stack.

- If all values match, the linked list is a palindrome.
- If any value differs, return `false`.

The stack stores the elements in reverse order, allowing comparison with the original traversal.

## Steps

1. Traverse the linked list and push every node's value onto a stack.
2. Traverse the list again from the head.
3. Compare each node's value with the stack's top element.
4. If all comparisons match, return `true`; otherwise, return `false`.

## Complexity Analysis

- **Time Complexity:** `O(n)`
  - One traversal to fill the stack.
  - One traversal to compare values.

- **Space Complexity:** `O(n)`
  - The stack stores all node values.




# Approach 2: Reverse Second Half (Optimal)

## Idea

Use the slow and fast pointer technique to find the middle of the linked list.

Reverse the second half of the list and compare it with the first half node by node.

- If all corresponding values are equal, the linked list is a palindrome.
- Otherwise, it is not.

This approach avoids using extra memory by modifying the list temporarily.

## Steps

1. Find the middle of the linked list using slow and fast pointers.
2. Reverse the second half of the list.
3. Compare the first half with the reversed second half.
4. If every pair of nodes matches, return `true`; otherwise, return `false`.

## Complexity Analysis

- **Time Complexity:** `O(n)`
  - Finding the middle: `O(n)`
  - Reversing the second half: `O(n)`
  - Comparing both halves: `O(n)`
  - Overall complexity remains **O(n)**.

- **Space Complexity:** `O(1)`
  - Only a few pointers are used regardless of the input size.