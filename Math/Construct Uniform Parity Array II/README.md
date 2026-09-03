# Approach

We can try both possible target parities:

- Make every element even.
- Make every element odd.

For each target parity, check whether every element can be made to have that parity.

## Key Observation

If we subtract two numbers:

- odd - odd = even
- even - even = even
- odd - even = odd
- even - odd = odd

When an element already has the target parity, we can simply keep it unchanged.

If an element has the wrong parity, we need to subtract another number.

For both cases, the number we subtract must be odd:

- To make an even number odd:
  `even - odd = odd`

- To make an odd number even:
  `odd - odd = even`

The subtraction must also be positive, so the odd number being subtracted must be smaller than the current number.

Therefore, we only need to know the smallest odd element in the entire array.

## Algorithm

1. Find the smallest odd number in `nums1`.
2. Check whether it is possible to make all elements even:
   - If an element is already even, keep it.
   - If an element is odd, it needs a smaller odd number to subtract.
   - If the smallest odd number is not smaller than the current element, making it even is impossible.
3. Perform the same check for making all elements odd.
4. Return `true` if either target parity is possible.

## Why the Smallest Odd Number Works

If there exists any odd number smaller than the current element, then the smallest odd number is also smaller than the current element.

Therefore, we do not need to search through every possible `j`.

This removes the nested loop from the original approach.

## Complexity

Time Complexity: `O(n)`

We scan the array a constant number of times.

Space Complexity: `O(1)`

Only a few variables are used.