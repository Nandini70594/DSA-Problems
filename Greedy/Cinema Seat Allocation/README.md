## Approach

The important observation is that an empty row can always accommodate **2 groups**:

    2 3 4 5     6 7 8 9
    --------    --------
      Group       Group

The three possible blocks are:

- `A = 2-5`
- `B = 4-7`
- `C = 6-9`

Blocks `A` and `C` do not overlap, so if both are available, we can place 2 groups.
If `A` and `C` cannot both be used, we check whether at least one of `A`, `B`, or `C` is available. If yes, we can place 1 group.

### Handling the large value of n

`n` can be as large as `10^9`, so we cannot iterate through all rows.

However, the number of reserved seats is at most `10^4`.

Therefore, we store the reserved seats row-wise using:

    map<int, set<int>> reserved;

For example:

    row 1 -> {2, 3, 8}
    row 2 -> {6}
    row 3 -> {1, 10}

Only rows that contain reservations need to be processed individually.

All other rows are completely empty and contribute 2 groups each.

So initially:

    ans = 2 * (n - number of affected rows)
Then, for every affected row, we check whether blocks `A`, `B`, and `C` are available.

### Cases for each affected row

- If `A` and `C` are both free → add `2`
- Else if any of `A`, `B`, or `C` is free → add `1`
- Otherwise → add `0`

Seats `1` and `10` do not need to be considered because they are not part of any valid group block.
## Algorithm

1. Store all reserved seats in a `map<int, set<int>>`, grouped by row.
2. Assume every unaffected row can accommodate 2 groups.
3. Initialize the answer as `2 * (n - reserved.size())`.
4. For every row containing reserved seats:
   - Check whether seats `2-5` are free.
   - Check whether seats `4-7` are free.
   - Check whether seats `6-9` are free.
5. If the first and third blocks are free, add 2.
6. Otherwise, if any block is free, add 1.
7. Return the answer.

## Complexity Analysis

Let `r` be the number of reserved seats.

### Time Complexity

Building the `map` and inserting seats into sets takes:

`O(r log r)`

For every affected row, we check only 12 seats in total:

- 4 seats for block `2-5`
- 4 seats for block `4-7`
- 4 seats for block `6-9`

Since there can be at most `r` affected rows, this is effectively:

`O(r log r)`

Overall:

**Time: `O(r log r)`**

### Space Complexity

We store all reserved seats:

**Space: `O(r)`**

Since `r <= 10^4`, this is efficient.
