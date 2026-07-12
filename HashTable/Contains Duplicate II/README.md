# Approach

## Intuition

We need to determine whether the same number appears again within a distance of `k` indices.

A brute-force solution compares every pair of elements, resulting in **O(n²)** time complexity, which is too slow for the given constraints.

Instead, we use a **Hash Map** to remember the **most recent index** where each number appeared.

When we encounter a number:

- If it has appeared before, calculate the distance between the current index and its previous index.
- If the distance is less than or equal to `k`, return `true`.
- Otherwise, update its latest index.

The latest occurrence is sufficient because it is always the closest previous occurrence to the current index.

---

## Algorithm

1. Create an unordered map to store:
   - **Key** → Number
   - **Value** → Latest index where the number appeared.
2. Traverse the array from left to right.
3. For each element:
   - Check whether it already exists in the map.
   - If it exists:
     - Compute the distance between the current index and the stored index.
     - If the distance is less than or equal to `k`, return `true`.
   - Update the current index of the element in the map.
4. If the traversal completes without finding any valid pair, return `false`.

---

## Dry Run

### Input

```text
nums = [1,2,3,1]
k = 3
```

### Initial State

```text
Hash Map = {}
```

---

### Step 1

Current element:

```text
1 (Index 0)
```

Not present in the map.

Insert:

```text
{
1 → 0
}
```

---

### Step 2

Current element:

```text
2 (Index 1)
```

Not present.

Insert:

```text
{
1 → 0
2 → 1
}
```

---

### Step 3

Current element:

```text
3 (Index 2)
```

Not present.

Insert:

```text
{
1 → 0
2 → 1
3 → 2
}
```

---

### Step 4

Current element:

```text
1 (Index 3)
```

Already exists in the map.

Previous index:

```text
0
```

Distance:

```text
3 - 0 = 3
```

Since

```text
3 <= k
```

Return **true**.

---

## Why Store Only the Latest Index?

Suppose:

```text
nums = [1,2,1,1]
k = 1
```

When processing the third `1`, the latest occurrence is always the closest previous occurrence.

If the closest occurrence is already farther than `k`, any earlier occurrence will be even farther away.

Therefore, storing only the latest index is sufficient.

---

## Complexity Analysis

### Time Complexity

- Each element is processed exactly once.

**O(n)**

---

### Space Complexity

- The hash map stores at most one entry for each distinct element.

**O(n)**

---

## Key Learning

- Use a **Hash Map** to store the latest occurrence of each element.
- Update the index after every visit.
- The latest occurrence is enough because it provides the minimum possible distance to the current index.
- This technique is commonly used in sliding window and hashing problems involving indices.