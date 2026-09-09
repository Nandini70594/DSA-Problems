## Approach

Instead of checking every number individually, group the numbers according to their number of digits.

### Digit Groups

- 1–3 digits: `1` to `999` → 0 commas
- 4–6 digits: `1000` to `999999` → 1 comma
- 7–9 digits: `1000000` to `999999999` → 2 commas
- 10–12 digits: `1000000000` to `999999999999` → 3 commas
- 13–15 digits: `1000000000000` to `999999999999999` → 4 commas

The number of commas increases by 1 after every additional group of 3 digits.

For a number having `d` digits, the number of commas is:

commas = (d - 1) / 3

However, we do not need to calculate this for every number.

For each digit group:

1. Find the starting number of the group.
2. Find the ending number of the group.
3. Count how many numbers from that group are present up to `n`.
4. Multiply that count by the number of commas in the group.
5. Add it to the answer.

Since `n` can be as large as `10^15`, iterating through every number is not feasible. The grouping approach only processes the small number of digit groups.

## Complexity

Time Complexity: O(log n)

Space Complexity: O(1)