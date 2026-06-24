# Approach

We use the two-pointer technique.

- One pointer keeps track of the position where the next unique element should be placed.
- Another pointer traverses the array.

Since the array is already sorted, duplicate elements appear consecutively.

Whenever the current element is different from the previous unique element:
1. Place it at the unique index.
2. Move the unique pointer forward.

At the end:
- the first `k` elements contain all unique values
- `k` is returned as the count of unique elements

---

# Complexity Analysis

## Time Complexity

```text
O(n)
```

The array is traversed once.

---

## Space Complexity

```text
O(1)
```

No extra space is used.