# Approach

This solution uses the **Two Pointers** technique to calculate the amount of trapped rainwater in a single traversal.

The key observation is that the water trapped at any position depends on the smaller of the maximum heights to its left and right.

Instead of precomputing left and right maximum arrays, two pointers are used to maintain these values while traversing from both ends.

---

# Algorithm

1. Initialize two pointers:
   - `left` at the beginning of the array.
   - `right` at the end of the array.
2. Maintain:
   - `leftMax` = maximum height encountered from the left.
   - `rightMax` = maximum height encountered from the right.
3. While `left < right`:
   - Update `leftMax` and `rightMax`.
   - If `leftMax < rightMax`:
     - The water trapped at the left pointer depends only on `leftMax`.
     - Add `leftMax - height[left]` to the answer.
     - Move the left pointer forward.
   - Otherwise:
     - The water trapped at the right pointer depends only on `rightMax`.
     - Add `rightMax - height[right]` to the answer.
     - Move the right pointer backward.
4. Return the total trapped water.

---

# Why This Works

For every position:

```text
Water Trapped = min(Max Left, Max Right) - Current Height
```

At any step:

- If `leftMax < rightMax`, then the left side is the limiting boundary.
- Therefore, the amount of water at the current left position can be determined without knowing the exact future right boundary.
- Similarly, when `rightMax <= leftMax`, the right side becomes the limiting boundary.

This allows the solution to compute the answer in one pass using constant extra space.

---

# Complexity Analysis

### Time Complexity

```text
O(n)
```

- Each pointer moves across the array at most once.

### Space Complexity

```text
O(1)
```

- Only a few variables are used regardless of the input size.