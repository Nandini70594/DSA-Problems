# Approach

This solution uses a **Sliding Window** along with a **Monotonic Decreasing Deque**.

The deque stores the indices of elements in decreasing order of their values. The front of the deque always represents the maximum element of the current window.

---

# Algorithm

1. Initialize an empty deque to store indices.
2. Process the first `k` elements:
   - Remove indices from the back while their corresponding values are smaller than or equal to the current element.
   - Insert the current index into the deque.
3. For every remaining element:
   - The element at the front of the deque is the maximum of the current window. Add it to the answer.
   - Remove indices from the front that are outside the current window.
   - Remove indices from the back whose values are smaller than or equal to the current element.
   - Insert the current index into the deque.
4. After processing all elements, add the maximum of the last window to the result.
5. Return the result.

---

# Why This Works

The deque maintains indices in decreasing order of their corresponding values.

- The front always contains the largest element of the current window.
- Smaller elements behind a larger element are removed because they can never become the maximum while the larger element remains inside the window.
- Indices outside the current window are removed from the front.

Thus, each window's maximum is obtained in constant time.

---

# Complexity Analysis

Let `n` be the number of elements.

### Time Complexity

```text
O(n)
```

- Every index is inserted into the deque exactly once.
- Every index is removed at most once.
- Therefore, the total number of deque operations is linear.

### Space Complexity

```text
O(k)
```

- The deque stores at most `k` indices corresponding to the current window.