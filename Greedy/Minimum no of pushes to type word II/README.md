# Approach

## Intuition

Since the keypad can be remapped freely, the order of characters in the string does not matter. The goal is to assign the smallest push cost to the most frequent letters.

## Algorithm

1. Count the frequency of each letter.
2. Sort the frequencies in descending order.
3. Assign costs:
   - First 8 letters → Cost 1
   - Next 8 letters → Cost 2
   - Remaining letters → Cost 3, and so on.
4. Multiply each frequency by its assigned cost and sum the result.

## Why Use a Vector Instead of a Map?

A `map` or `unordered_map` also works, but a `vector<int>(26)` is preferred because:
- There are only **26 lowercase letters**.
- It provides direct indexing (`c - 'a'`).
- It is faster and uses less memory.
- It can be sorted directly without extra processing.

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`