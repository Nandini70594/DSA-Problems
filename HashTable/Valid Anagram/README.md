# Approach - Hash Map (Frequency Counting)

## Intuition

Two strings are anagrams if they contain exactly the same characters with the same frequencies.

Instead of sorting both strings, count the frequency of each character in one string and decrease the frequency while traversing the other string.

If all frequencies become zero, the strings are anagrams.

---

## Algorithm

1. If the lengths of both strings are different, return `false`.
2. Create a hash map to store character frequencies.
3. Traverse the first string and increment the frequency of each character.
4. Traverse the second string and decrement the frequency of each character.
5. Traverse the hash map:
   - If any frequency is not zero, return `false`.
6. Otherwise, return `true`.

---

## Time Complexity

- Building the frequency map: **O(n)**
- Updating frequencies: **O(n)**
- Checking the map: **O(k)**, where `k` is the number of distinct characters.

Overall Time Complexity: **O(n)**

---

## Space Complexity

- Hash Map stores character frequencies.

**Space Complexity:** **O(k)**

where `k` is the number of distinct characters.

---

# Optimized Approach (Frequency Array)

Since the problem states that the strings contain only lowercase English letters, an array of size 26 can be used instead of a hash map.

## Algorithm

1. If lengths are different, return `false`.
2. Create an integer array of size 26 initialized to zero.
3. Increment the frequency for each character in `s`.
4. Decrement the frequency for each character in `t`.
5. If every element in the array is zero, return `true`; otherwise return `false`.

---

## Time Complexity

**O(n)**

## Space Complexity

**O(1)** (Fixed-size array of 26 elements)

---

## Follow-up (Unicode Characters)

If the strings can contain Unicode characters, a fixed-size array is no longer sufficient because the character set is much larger.

In that case:

- Use a hash map (`unordered_map`) to store the frequency of each character (or Unicode code point).
- Increment frequencies for the first string.
- Decrement frequencies for the second string.
- Verify that all frequencies are zero.

This maintains:

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(k)`, where `k` is the number of distinct Unicode characters.