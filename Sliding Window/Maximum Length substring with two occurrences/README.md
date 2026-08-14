## Solution Approach

Use the Sliding Window technique with a frequency map.

Maintain a window from `left` to `right` and store the frequency of each character in the window.

- Move `right` through the string and add `s[right]` to the frequency map.
- If the frequency of `s[right]` becomes greater than 2, the window becomes invalid.
- Move `left` forward while decreasing the frequency of `s[left]]`.
- Continue until every character appears at most twice.
- For every valid window, calculate its length and update `maxlen`.

The window is always kept valid before calculating its maximum length.

## Complexity Analysis

Time Complexity: O(n)

Space Complexity: O(k), where k is the number of distinct characters.

Since there are only 26 lowercase English letters, the space complexity can be considered O(1).