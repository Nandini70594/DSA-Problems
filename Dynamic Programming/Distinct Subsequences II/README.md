## Approach

We use Dynamic Programming.

Let `dp` represent the number of distinct subsequences formed so far, including the empty subsequence.

Initially:

`dp = 1`

because the empty subsequence `""` exists.

For every character, each existing subsequence has two choices:

1. Do not take the current character.
2. Take the current character.

So normally:

`new_dp = 2 * dp`

However, if the current character has appeared before, some of the newly created subsequences will be duplicates.

To remove these duplicates, maintain an array:

`last[26]`

where `last[c]` stores the value of `dp` from just before the previous occurrence of character `c`.

Therefore, for every character:

`new_dp = 2 * dp - last[c]`

After calculating the new value, update:

`last[c] = dp`

and then:

`dp = new_dp`

### Example: `"aba"`

Initially:

`dp = 1`

For the first `'a'`:

`new_dp = 2 * 1 - 0 = 2`

Subsequences:

`"", "a"`

Store:

`last['a'] = 1`

For `'b'`:

`new_dp = 2 * 2 - 0 = 4`

Subsequences:

`"", "a", "b", "ab"`

Store:

`last['b'] = 2`

For the second `'a'`:

Without removing duplicates:

`2 * 4 = 8`

But the subsequence `"a"` is duplicated.

Since:

`last['a'] = 1`

we get:

`new_dp = 2 * 4 - 1 = 7`

The 7 subsequences include the empty subsequence, so the final answer is:

`7 - 1 = 6`

The non-empty subsequences are:

`"a", "b", "ab", "aa", "ba", "aba"`

## Why Does `last[c]` Remove Duplicates?

When a character `c` appears again, appending the new `c` to subsequences that existed before its previous occurrence creates subsequences that were already created during the previous occurrence of `c`.

`last[c]` stores exactly the number of such subsequences.

Therefore:

`duplicates = last[c]`

and:

`new_dp = 2 * dp - last[c]`

## Algorithm

1. Initialize `dp = 1` to represent the empty subsequence.
2. Create `last[26]` and initialize all values to `0`.
3. For every character `c`:
   - Find its index using `c - 'a'`.
   - Calculate `new_dp = 2 * dp - last[c]`.
   - Store the old `dp` in `last[c]`.
   - Update `dp = new_dp`.
4. Subtract `1` from `dp` because the empty subsequence is not required.
5. Return the answer modulo `10^9 + 7`.

## Complexity

Time Complexity: `O(n)`

Space Complexity: `O(26) = O(1)`

