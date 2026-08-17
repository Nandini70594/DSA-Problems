# Approach

1. Traverse the sentence character by character and build each word until a space is encountered.
2. For every word, check if its length is at least the length of `searchWord`.
3. Compare the characters of the current word with `searchWord` from the beginning.
4. If all characters match, return the current word's 1-indexed position.
5. Otherwise, move to the next word and repeat.
6. If no word matches, return `-1`.

### Complexity

- **Time:** O(n × m), where `n` is the length of the sentence and `m` is the length of `searchWord`.
- **Space:** O(n) in the worst case for storing the current word.