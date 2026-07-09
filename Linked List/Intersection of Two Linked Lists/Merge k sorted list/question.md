# Merge k Sorted Lists

## Problem Statement

You are given an array of `k` linked lists, where each linked list is sorted in ascending order.

Merge all the linked lists into one sorted linked list and return the merged linked list.

---

## Examples

### Example 1

**Input**
```text
lists = [[1,4,5],[1,3,4],[2,6]]
```

**Output**
```text
[1,1,2,3,4,4,5,6]
```

**Explanation**

The linked lists are:

```text
[
  1 -> 4 -> 5,
  1 -> 3 -> 4,
  2 -> 6
]
```

After merging:

```text
1 -> 1 -> 2 -> 3 -> 4 -> 4 -> 5 -> 6
```

---

### Example 2

**Input**
```text
lists = []
```

**Output**
```text
[]
```

---

### Example 3

**Input**
```text
lists = [[]]
```

**Output**
```text
[]
```

---

## Constraints

- `k == lists.length`
- `0 <= k <= 10⁴`
- `0 <= lists[i].length <= 500`
- `-10⁴ <= lists[i][j] <= 10⁴`
- `lists[i]` is sorted in ascending order.
- The sum of all linked list lengths will not exceed `10⁴`.