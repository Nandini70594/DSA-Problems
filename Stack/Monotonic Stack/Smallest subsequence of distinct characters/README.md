# Approach

## Intuition

We need to construct the smallest lexicographical subsequence while ensuring:

- Every distinct character appears exactly once.
- The relative order of characters is preserved.

A **monotonic increasing stack** helps maintain the smallest possible order.

Before removing a character from the stack, we must ensure that it appears again later in the string. Otherwise, removing it would make it impossible to include that character in the final answer.

To accomplish this, we maintain:

- `last[]` → Stores the last occurrence of every character.
- `visited[]` → Tracks whether a character is already present in the stack.
- `stack` → Maintains the current smallest subsequence.

---

## Algorithm

1. Store the last occurrence of every character.
2. Traverse the string.
3. If the current character is already present in the stack, skip it.
4. Otherwise, while:
   - the stack is not empty,
   - the top character is greater than the current character,
   - and the top character appears again later,
   
   remove the top character from the stack.
5. Push the current character into the stack and mark it as visited.
6. Pop all characters from the stack, reverse the obtained string, and return it.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---