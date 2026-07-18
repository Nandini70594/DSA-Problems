# Telephone Line Company (TLC)

## Problem Statement

A Telephone Line Company (TLC) is establishing a new telephone cable network connecting several places numbered from **1 to N**. Each place has exactly one telephone exchange, and the exchanges are connected by **bidirectional telephone lines**.

The network is connected, meaning every place can reach every other place either directly or through intermediate exchanges.

Occasionally, a telephone exchange may fail due to a power outage. When this happens, that exchange becomes non-operational. Besides making the failed exchange unreachable, its failure may also disconnect other parts of the network from each other.

A place is called **critical** if removing its exchange causes the remaining network to become disconnected.

Your task is to determine the **number of critical places (articulation points)** in each given network.

---

## Input

The input consists of multiple test cases.

For each test case:

- The first line contains an integer **N** (**N < 100**) — the number of places.
- The following lines describe the network.
- Each line starts with an integer **u**, followed by all places directly connected to **u**.
- These lines collectively describe every bidirectional connection exactly once.
- A line containing only **0** marks the end of the current test case.
- The input terminates with a test case where **N = 0**.

---

## Output

For each test case, output a single integer representing the **number of critical places (articulation points)** in the network.

---

## Constraints

- `1 ≤ N < 100`
- The graph is connected.
- The graph is undirected.
- Multiple test cases are present.

---

## Example

### Input
```text
5
1 2 3
2 1 3
3 1 2 4 5
4 3
5 3
0
0
```

### Output
```text
1
```

---

## Explanation

Removing place **3** disconnects the graph into multiple components, making it a **critical place (articulation point)**.

Removing any other place does not disconnect the network.

Hence, the answer is **1**.

