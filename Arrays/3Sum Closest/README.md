### `README.md`

```md
# 3Sum Closest

## Approach

### Step 1: Sort the Array

First, sort the array so that we can efficiently use the two-pointer technique.

---

### Step 2: Fix One Element

Iterate through the array and fix one element at index `i`.

For every fixed element:
- use two pointers
- `left = i + 1`
- `right = n - 1`

---

### Step 3: Use Two Pointers

Calculate:
```cpp
sum = nums[i] + nums[left] + nums[right];

Update the closest sum whenever:

abs(target - sum) < abs(target - closest)
Pointer Movement
If sum < target
move left++
to increase the sum
If sum > target
move right--
to decrease the sum
If sum == target
return immediately because exact match is the closest possible answer
Complexity Analysis
Time Complexity
Sorting: O(n log n)
Two-pointer traversal inside loop: O(n²)

Overall:

O(n²)
Space Complexity
O(1)

No extra space is used except a few variables.