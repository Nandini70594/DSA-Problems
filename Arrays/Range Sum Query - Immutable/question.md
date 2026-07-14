# 303. Range Sum Query - Immutable

## Problem Statement

Given an integer array `nums`, handle multiple queries of the following type:

- Calculate the sum of the elements of `nums` between indices `left` and `right` (inclusive), where `left <= right`.

Implement the `NumArray` class:

- `NumArray(int[] nums)` Initializes the object with the integer array `nums`.
- `int sumRange(int left, int right)` Returns the sum of the elements from index `left` to `right` (inclusive).

---

### Example

**Input**

```text
["NumArray", "sumRange", "sumRange", "sumRange"]
[[[-2,0,3,-5,2,-1]], [0,2], [2,5], [0,5]]
```

**Output**

```text
[null,1,-1,-3]
```

**Explanation**

```text
NumArray numArray = new NumArray([-2,0,3,-5,2,-1]);

numArray.sumRange(0,2); // 1
numArray.sumRange(2,5); // -1
numArray.sumRange(0,5); // -3
```

---

### Constraints

- `1 <= nums.length <= 10^4`
- `-10^5 <= nums[i] <= 10^5`
- `0 <= left <= right < nums.length`
- At most `10^4` calls will be made to `sumRange`.