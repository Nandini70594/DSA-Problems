# Approach

## Idea

Since the given string is already a palindrome:

- Every character appears an even number of times except possibly one.
- The first half of the palindrome already contains one occurrence from every character pair.

To obtain the lexicographically smallest palindrome:

1. Sort only the first half of the string.
2. Copy (mirror) the sorted first half into the second half.
3. The middle character (if the length is odd) remains unchanged.

Sorting the first half places smaller characters earlier, making the entire palindrome lexicographically smallest.

---

## Complexity Analysis

### Time Complexity

- Sorting first half: **O((n/2) log(n/2))**
- Mirroring: **O(n/2)**

Overall:

```text
O(n log n)
```

---

### Space Complexity

```text
O(1)
```

Sorting is performed in-place apart from the recursion stack used internally by `std::sort`.