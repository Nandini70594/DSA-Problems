## Approach

Use **backtracking** to generate all possible permutations.

- Maintain a `current` vector containing the permutation being built.
- Maintain a `used` array to keep track of which elements have already been selected.
- At each step, try every unused element.
- Add the selected element to `current` and mark it as used.
- Recursively select the next element.
- When `current` contains all elements, add it to the answer.
- Backtrack by removing the last element and marking it as unused so it can be used in another permutation.

For `n` distinct elements, the total number of permutations is:

`n!`

## Complexity

**Time Complexity:** `O(n × n!)`

There are `n!` permutations, and each permutation contains `n` elements.

**Space Complexity:** `O(n)`

The recursion stack, `current` vector, and `used` array require `O(n)` auxiliary space, excluding the output.

**Output Space:** `O(n × n!)`