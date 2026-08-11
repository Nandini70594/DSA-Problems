# Approach

## Idea

The problem can be divided into two steps:

1. Find the sum of the longest sequential prefix.
2. Starting from that sum, find the smallest integer that is not present in the array.

## Step 1: Find the Sequential Prefix Sum

Start with the first element:

    int sum = nums[0];

Then compare every element with the previous element.

The sequence continues only when:

    nums[i] == nums[i - 1] + 1

If this condition is true, add nums[i] to sum.

Otherwise, the sequential prefix has ended.


## Step 2: Find the Smallest Missing Integer

The answer must be greater than or equal to sum.

So start with:

    int x = sum;

Check whether x exists anywhere in the array.

- If it exists, increment x.
- If it does not exist, return x.



## Complexity

Time Complexity: O(n²)

Space Complexity: O(1)