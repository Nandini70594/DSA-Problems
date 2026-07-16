# 787. Cheapest Flights Within K Stops

## Problem Statement

There are `n` cities connected by a number of flights. You are given an array `flights` where:

- `flights[i] = [from, to, price]`

indicates that there is a flight from city `from` to city `to` with cost `price`.

You are also given three integers:

- `src` – starting city
- `dst` – destination city
- `k` – maximum number of stops allowed

Return the **minimum cost** to travel from `src` to `dst` with **at most `k` stops**. If no such route exists, return `-1`.

---

## Example 1

**Input**

```text
n = 4
flights = [[0,1,100],[1,2,100],[2,3,100],[0,3,500]]
src = 0
dst = 3
k = 1
```

**Output**

```text
500
```

**Explanation**

The path `0 → 1 → 2 → 3` has cost `300` but requires **2 stops**, which exceeds the limit.

The direct flight `0 → 3` costs `500`, so the answer is `500`.

---

## Example 2

**Input**

```text
n = 4
flights = [[0,1,1],[0,2,5],[1,2,1],[2,3,1]]
src = 0
dst = 3
k = 1
```

**Output**

```text
6
```

---

## Constraints

- `1 <= n <= 100`
- `0 <= flights.length <= n * (n - 1) / 2`
- `0 <= from, to < n`
- `1 <= price <= 10^4`
- `from != to`
- `0 <= src, dst < n`
- `src != dst`
- `0 <= k < n`