## Approach

- Traverse the binary tree using **Depth First Search (DFS)**.
- For each node, swap its left and right child.
- Recursively repeat the same process for both subtrees.
- Continue until all nodes have been processed.
- Return the root of the inverted tree.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`  
  Every node is visited exactly once.

- **Space Complexity:** `O(h)`  
  Where `h` is the height of the tree due to the recursion stack.
  - **Balanced tree:** `O(log n)`
  - **Skewed tree:** `O(n)`