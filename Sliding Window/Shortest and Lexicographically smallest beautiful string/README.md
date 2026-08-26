## Approach

We use the **Sliding Window / Two Pointer** technique.

Maintain a window from index `i` to index `j`. The variable `count` keeps track of the number of `'1'`s inside the current window.

As `j` moves from left to right, whenever `s[j]` is `'1'`, increase `count`.

If the window contains more than `k` ones, it is invalid. Move `i` forward until the window contains at most `k` ones. Whenever `s[i]` is `'1'`, decrease `count` before moving `i`.

When the window contains exactly `k` ones, it is a beautiful substring.

However, the window may have unnecessary zeroes at its beginning. For example, a window like `"00011001"` contains the same number of ones as `"11001"`, but the zeroes at the beginning make it longer. Therefore, keep moving `i` forward while `s[i]` is `'0'`.

Now the substring from `i` to `j` is the shortest beautiful substring ending at `j`.

Calculate its length and compare it with the shortest length found so far.

- If the current substring is shorter, make it the new answer.
- If it has the same length, compare it lexicographically with the current answer and keep the smaller one.

For example, if two shortest candidates are `"1001"` and `"0111"`, both have length 4, but `"0111"` is lexicographically smaller, so `"0111"` is selected.

The variable `ans` stores the best substring found so far. Whenever a better candidate is found, the entire current substring is assigned to `ans`.

## Why Sliding Window Works

We only care about the number of ones in a substring.

The right pointer `j` expands the window and adds characters. When there are too many ones, the left pointer `i` moves forward to remove unnecessary characters.

Since both pointers only move forward through the string, we avoid checking every possible substring separately.

Removing leading zeroes is also important because zeroes do not affect the count of ones. Removing them can only make the substring shorter while keeping it beautiful.

## Complexity

Time Complexity: `O(n²)` in the worst case because substring creation and lexicographical comparison can take `O(n)`.

Space Complexity: `O(n)` for storing the current substring and answer.
Since `n <= 100`, this approach easily satisfies the constraints.
