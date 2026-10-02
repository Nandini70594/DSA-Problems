# Generate Parentheses

## Approach

This problem can be solved using **backtracking**.

We build the parentheses string one character at a time. While building it, we keep track of:

- `open` → number of `(` used
- `close` → number of `)` used

There are two choices at every step.

### 1. Add an Opening Bracket

We can add `(` as long as we have not used all `n` opening brackets:

`open < n`

### 2. Add a Closing Bracket

We can add `)` only when there is an unmatched `(` available:

`close < open`

This condition prevents invalid strings such as:

`())(`

We are allowed to have `open == close` after adding a closing bracket. It simply means that currently all opened brackets have been closed. The condition `close < open` is checked **before adding** another `)`.

### Base Case

Each valid answer contains exactly `2 * n` characters.

`if (s.length() == 2 * n)`

At this point, the string is complete, so we add it to the answer list.

## Algorithm

1. Start with an empty string.
2. Set `open = 0` and `close = 0`.
3. If `open < n`, recursively add `(`.
4. If `close < open`, recursively add `)`.
5. When the string length becomes `2 * n`, store it.
6. Return all generated strings.

## Example Walkthrough

For `n = 2`:

                    ""
                     |
                    "("
                  /     \
                "(("    "()"
                 |       |
               "(()"    "()("
                 |       |
               "(())"   "()()"

The final valid combinations are:

["(())", "()()"]

## Why Backtracking?

We need to generate **all possible valid combinations**, so we explore different choices of `(` and `)`.

However, we do not generate invalid possibilities. The condition:

`close < open`

prunes branches where a closing bracket would appear before its matching opening bracket.

Thus, backtracking explores only valid prefixes.

## Complexity Analysis

Let `Cₙ` be the `n`th Catalan number, which is the number of valid parentheses combinations.

### Time Complexity

**O(Cₙ × n)**

There are `Cₙ` valid combinations, and each generated string has length `2n`. Therefore, the total work is proportional to the number of generated strings and their length.

### Space Complexity

**O(Cₙ × n)** for storing all generated answers.

The recursion itself uses **O(n)** stack space.