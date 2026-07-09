# Approach

This solution uses **recursion** to reverse the linked list in groups of size `k`.

Before reversing a group, it first checks whether at least `k` nodes are available. If fewer than `k` nodes remain, the remaining nodes are returned without modification.

---

# Algorithm

1. Traverse `k` nodes ahead to check whether the current group contains at least `k` nodes.
2. If fewer than `k` nodes are present, return the current head without reversing.
3. Recursively call the function for the remaining part of the list starting after the current `k` nodes.
4. Reverse the current group of `k` nodes.
5. Connect the reversed group with the result returned from the recursive call.
6. Return the new head of the reversed group.

---

# Why This Works

- Every recursive call processes exactly one group of `k` nodes.
- The recursion first processes the remaining list and returns the correctly modified tail.
- While returning from recursion, each current group is reversed and attached to the already processed remainder.
- If the last group contains fewer than `k` nodes, it is left unchanged as required.

---

# Complexity Analysis

Let `n` be the number of nodes.

### Time Complexity

```text
O(n)
```

- Each node is visited a constant number of times.

### Space Complexity

```text
O(n / k)
```

- Recursive calls are made once for every group of `k` nodes.
- In the worst case (`k = 1`), the recursion depth becomes `O(n)`.