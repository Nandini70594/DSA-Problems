# Approach

## Intuition

The problem consists of three independent steps:

1. Build the `prefixGcd` array.
2. Sort the resulting array.
3. Pair the smallest and largest elements and calculate the GCD of each pair.

Instead of solving everything together, we process each step separately.

---

## Algorithm

### Step 1: Construct `prefixGcd`

Maintain the maximum element seen so far while traversing the array.

For every index:

- Update the current maximum.
- Compute

```text
prefixGcd[i] = gcd(nums[i], currentMaximum)
```

Store the result in the `prefixGcd` array.

---

### Step 2: Sort

Sort the `prefixGcd` array in ascending order.

This allows easy pairing of the smallest and largest remaining elements.

---

### Step 3: Form Pairs

Use two pointers:

- `left` starts from the beginning.
- `right` starts from the end.

While `left < right`:

- Compute

```text
gcd(prefixGcd[left], prefixGcd[right])
```

- Add it to the answer.
- Move both pointers inward.

If the array has an odd number of elements, the middle element remains unpaired and is ignored automatically.

---

## Correctness

- Every element of `prefixGcd` is constructed exactly as defined.
- Sorting ensures the smallest and largest elements can be paired directly.
- The two-pointer approach forms exactly the required pairs without repetition.
- The accumulated GCD values give the required answer.

---

## Complexity Analysis

### Time Complexity

- Constructing `prefixGcd`: **O(n)**
- Sorting: **O(n log n)**
- Pairing: **O(n)**

**Overall Complexity**

```text
O(n log n)
```

---

### Space Complexity

The additional `prefixGcd` array requires

```text
O(n)
```

extra space.