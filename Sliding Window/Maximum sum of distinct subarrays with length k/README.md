# Approach

## Idea
Use the Sliding Window technique along with a `set` to maintain a window of distinct elements.

- Expand the window by adding the current element.
- If the current element is already present or the window size reaches `k`, shrink the window from the left.
- Maintain the current window sum while adding and removing elements.
- Whenever the window contains exactly `k` distinct elements, update the maximum sum.

The `set` ensures all elements in the current window remain unique.

## Time Complexity
- **O(n log k)**

## Space Complexity
- **O(k)**