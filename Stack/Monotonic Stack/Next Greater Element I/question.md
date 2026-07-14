# 496. Next Greater Element I

## Problem Statement

The **next greater element** of an element `x` in an array is the first greater element that appears to the right of `x`.

You are given two distinct integer arrays `nums1` and `nums2`, where `nums1` is a subset of `nums2`.

For each element in `nums1`, find its next greater element in `nums2`. If it does not exist, return `-1`.

Return an array containing the next greater element for every element in `nums1`.

### Example 1

**Input**

```text
nums1 = [4,1,2]
nums2 = [1,3,4,2]
```

**Output**

```text
[-1,3,-1]
```

### Example 2

**Input**

```text
nums1 = [2,4]
nums2 = [1,2,3,4]
```

**Output**

```text
[3,-1]
```

### Constraints

- `1 <= nums1.length <= nums2.length <= 1000`
- `0 <= nums1[i], nums2[i] <= 10^4`
- All integers are unique.
- Every element of `nums1` appears in `nums2`.