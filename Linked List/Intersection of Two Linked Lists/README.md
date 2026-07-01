# Intersection of Two Linked Lists



## Approach

We use the Two Pointer Technique to find the intersection node of two linked lists.

Two pointers are initialized:

- `p1` starts from `headA`
- `p2` starts from `headB`

Both pointers move one step at a time through their respective lists.

When a pointer reaches the end of a list, it is redirected to the head of the other list.

This way:

- `p1` travels: `LengthA + LengthB`
- `p2` travels: `LengthB + LengthA`

Since both pointers travel the same total distance, they will eventually meet at:

- the intersection node if an intersection exists
- `NULL` if there is no intersection

This approach works without modifying the linked lists and uses constant extra space.



## Complexity Analysis

### Time Complexity

```text
O(m + n)

### Space Complexity

```text
O(1)
