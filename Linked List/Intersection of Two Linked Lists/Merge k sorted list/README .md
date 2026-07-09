# Approach

This solution merges the linked lists one by one using the already solved problem of merging two sorted linked lists.

## Algorithm

1. If the input vector is empty, return `NULL`.
2. Initialize the merged list as the first linked list.
3. Iterate through the remaining linked lists.
4. Merge the current merged list with the next linked list using the `mergeTwoLists()` function.
5. Continue until all lists have been merged.
6. Return the final merged linked list.

---

# Merging Two Sorted Lists

To merge two sorted linked lists:

1. Create a dummy node.
2. Maintain a pointer `tail` pointing to the last node of the merged list.
3. Compare the current nodes of both lists.
4. Append the smaller node to the merged list and move its pointer forward.
5. Move the `tail` pointer forward.
6. After one list is exhausted, attach the remaining nodes of the other list.
7. Return `dummy.next` as the head of the merged list.

---

# Why This Works

- Each merge operation maintains the sorted order because the smaller node is always selected first.
- After merging two lists, the result remains sorted.
- Repeating this process for all `k` lists produces one completely sorted linked list.

---

# Complexity Analysis

Let:

- `k` = Number of linked lists
- `N` = Total number of nodes across all linked lists

### Time Complexity

- Each merge may process all nodes accumulated so far.
- Repeating this for all `k` lists results in:

```text
O(N × k)
```

In the worst case, the merged list is traversed repeatedly while merging each remaining list.

### Space Complexity

```text
O(1)
```

- No extra data structures are used.
- The existing nodes are rearranged by updating pointers only.