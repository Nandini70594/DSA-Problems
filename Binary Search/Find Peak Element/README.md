# Approach

Use **Binary Search** to find a peak efficiently.

## Idea

At each step, compare the middle element with its next element.

- If `nums[mid] > nums[mid + 1]`, the array is descending at `mid`, so a peak must exist on the left side (including `mid`).
- If `nums[mid] < nums[mid + 1]`, the array is ascending, so a peak must exist on the right side.

Continue narrowing the search space until both pointers meet. The final position is a valid peak.

## Why It Works

A peak is guaranteed to exist because the elements outside the array are considered `-∞`. By following the increasing or decreasing slope, binary search always moves toward a peak while eliminating half of the remaining search space.

## Complexity

- **Time:** `O(log n)`
- **Space:** `O(1)`