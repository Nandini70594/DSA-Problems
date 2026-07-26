# Approaches

## Approach 1: Sorting

### Idea

Sort the array in ascending order.

After sorting, there are only two possible combinations that can produce the maximum product:

- The product of the three largest elements.
- The product of the two smallest elements (which may be negative) and the largest element.

Compute both products and return the larger one.

### Why It Works

Sorting arranges all numbers in order, making it easy to identify:

- The three largest values.
- The two smallest values.

Since multiplying two negative numbers produces a positive number, the second combination can sometimes produce a larger result than using the three largest numbers.

### Time Complexity

- **Sorting:** `O(n log n)`
- **Overall:** `O(n log n)`

### Space Complexity

- **O(1)** (ignoring the space used internally by the sorting algorithm)

---

## Approach 2: Single Traversal

### Idea

Instead of sorting, traverse the array once while maintaining:

- The three largest numbers seen so far.
- The two smallest numbers seen so far.

After completing the traversal:

- Calculate the product of the three largest numbers.
- Calculate the product of the two smallest numbers and the largest number.
- Return the maximum of the two products.

### Why It Works

The maximum product can only be formed in two ways:

- Three largest values.
- Two most negative values together with the largest positive value.

Keeping track of these five numbers during a single traversal eliminates the need for sorting while still considering every possible optimal combination.

### Time Complexity

- **Single Traversal:** `O(n)`

### Space Complexity

- **O(1)**