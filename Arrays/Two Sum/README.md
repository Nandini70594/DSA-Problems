Approach

We use an unordered_map to store:

element value as the key
its index as the value

While traversing the array:

Calculate the required complement:
complement = target - nums[i]
Check whether the complement already exists in the map.
If it exists, we have found the required pair of indices.
Otherwise, store the current element and its index in the map.

This approach allows us to find the solution in a single traversal of the array.

Complexity Analysis:
Time Complexity : O(n)
Each element is visited once.
Lookup and insertion in unordered_map take average O(1) time.
Space Complexity : O(n)
Extra space is used for storing elements in the hash map.