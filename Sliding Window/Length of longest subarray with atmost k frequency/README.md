## Approach

We use the **Sliding Window** technique along with a **Hash Map** to store the frequency of elements.

Maintain two pointers:

- `left` → start of the current window
- `right` → end of the current window

For every `right`:

1. Add `nums[right]` to the frequency map.
2. If the frequency of `nums[right]` becomes greater than `k`, the current window becomes invalid.
3. Move `left` forward and decrease the frequency of `nums[left]` until the window becomes valid again.
4. Calculate the current window length using:

`right - left + 1`

5. Update the maximum length.

This avoids checking every possible subarray and reduces the brute-force approach from `O(n²)` to `O(n)`.

---

## Complexity Analysis

### Time Complexity

`O(n)`

The `right` pointer moves from left to right once, and the `left` pointer also moves forward at most `n` times. Therefore, each element is processed a constant number of times.

### Space Complexity

`O(n)`

The hash map can store frequencies for up to `n` distinct elements.

---

## Key Learning

- Use **Sliding Window** for longest/shortest contiguous subarray problems.
- Use a **Hash Map** to maintain the frequency of elements in the current window.
- When the window becomes invalid, move the `left` pointer instead of restarting the search.
- Two pointers can still give `O(n)` time when both pointers only move forward.
- Sliding Window can reduce a brute-force `O(n²)` solution to `O(n)`.