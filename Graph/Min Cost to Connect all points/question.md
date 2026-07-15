# Min Cost to Connect All Points

## Problem Statement

You are given an array `points` representing integer coordinates of points on a 2D plane, where:

- `points[i] = [xi, yi]`

The cost of connecting two points is the **Manhattan Distance** between them:

|xi - xj| + |yi - yj|

Return the **minimum cost** required to connect all the points.

A valid connection must satisfy:

- Every point is connected.
- There is exactly **one simple path** between every pair of points.

---

## Example 1

**Input**

points = [[0,0],[2,2],[3,10],[5,2],[7,0]]

**Output**

20

**Explanation**

The minimum spanning tree connects all points with a total cost of 20.

---

## Example 2

**Input**

points = [[3,12],[-2,5],[-4,1]]

**Output**

18

---

## Constraints

- 1 <= points.length <= 1000
- -10^6 <= xi, yi <= 10^6
- All points are distinct.
