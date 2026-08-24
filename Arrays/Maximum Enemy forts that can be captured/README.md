## Approach

The army can move only between:

- A fort under our command (`1`)
- An empty position (`-1`)

All positions between them must contain enemy forts (`0`).

So, we need to find the **maximum number of consecutive `0`s that lie between a `1` and a `-1`**.

We can solve this using a single traversal of the array.

### Step 1: Keep track of the previous non-zero value

We maintain `prev`, which stores the previous `1` or `-1` that we encountered.

We do not consider `0` as the previous value because `0` represents an enemy fort and can occur between the two endpoints.

Initially, `prev` is set to `0` to indicate that we have not encountered any `1` or `-1` yet.

### Step 2: Count consecutive enemy forts

Whenever we encounter `0`, we increase a counter `count`.

For example:

`1 0 0 0 -1`

Here, `count` becomes `3`.

### Step 3: Check when we encounter `1` or `-1`

When we encounter a non-zero value:

- If the previous non-zero value is the opposite type, meaning one is `1` and the other is `-1`, then the enemy forts counted between them can all be captured.
- Update the maximum answer using `count`.
- Make the current value the new `prev`.
- Reset `count` to `0`.

For example:

`1 0 0 -1`

The previous non-zero value is `1` and the current value is `-1`.

Therefore, the `2` enemy forts between them can be captured.

Similarly:

`-1 0 0 0 1`

is also valid because the army can move in either direction.

### Step 4: Ignore invalid sequences

If the two non-zero values are the same, they cannot form a valid movement.

For example:

`1 0 0 1`

is invalid because the destination must be `-1`.

Similarly:

`-1 0 0 -1`

is invalid because the starting point must be `1`.



## Complexity

**Time Complexity:** `O(n)` because we traverse the array only once.

**Space Complexity:** `O(1)` because we use only a few variables.