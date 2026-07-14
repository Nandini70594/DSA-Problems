# Approach

## Intuition

The brute-force approach searches to the right of every element, leading to `O(n × m)` complexity.

A more efficient solution uses a **monotonic decreasing stack** to preprocess the next greater element for every number in `nums2`.

The computed results are stored in a hash map, allowing each query from `nums1` to be answered in constant time.

## Algorithm

1. Create an empty stack and hash map.
2. Traverse `nums2` from right to left.
3. Remove all elements from the stack that are smaller than the current element.
4. If the stack is empty, the next greater element is `-1`.
5. Otherwise, the stack's top is the next greater element.
6. Store the result in the hash map.
7. Push the current element onto the stack.
8. Traverse `nums1` and retrieve each answer from the hash map.

## Complexity Analysis

- **Time Complexity:** `O(n + m)`
- **Space Complexity:** `O(m)`

where:

- `n = nums1.size()`
- `m = nums2.size()`

## Data Structures Used

- Monotonic Stack
- Unordered Map
- Vector

## Key Concept

Whenever a problem asks for the **next greater**, **next smaller**, **previous greater**, or **previous smaller** element, a **monotonic stack** is often the optimal data structure to achieve linear time complexity.