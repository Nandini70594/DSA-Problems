# Approach

## Idea
Use the Sliding Window technique since all array elements are positive.

- Expand the window by moving the right pointer and add the current element to the running sum.
- The current window length is calculated as **`right - left + 1`**.
- Whenever the current sum becomes greater than or equal to the target, update the minimum length using `right - left + 1`.
- Continue shrinking the window from the left while the sum still satisfies the condition to find the smallest valid subarray.
- If no valid subarray is found, return `0`.

Since each element enters and leaves the window at most once, the solution is efficient.

## Time Complexity
- **O(n)**

## Space Complexity
- **O(1)**
```