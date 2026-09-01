# Approach — Minimum Moves to Clean the Classroom

## Intuition

Use **BFS** because every move costs exactly `1`.

A state is represented as:

`(x, y, mask, energy, steps)`

where:
- `x, y` = current position
- `mask` = litter already collected
- `energy` = remaining energy
- `steps` = moves taken

## 1. Find Start and Litter IDs

Traverse the grid once to:
- Find the starting position `'S'`
- Count all `'L'` cells
- Assign each litter an ID: `0, 1, 2, ...`

## 2. Bitmask

Each bit represents whether a litter is collected.

For 3 litters:

`000` → none collected  
`001` → L0 collected  
`101` → L0 and L2 collected  
`111` → all collected

When reaching litter `id`:

`mask |= (1 << id)`

All litter collected:

`fullMask = (1 << litterCount) - 1`

## 3. BFS

Start with:

`(sx, sy, 0, energy, 0)`

For every state, try all four directions.

For each valid move:
- Decrease energy by `1`
- If the cell is `'L'`, update the mask
- If the cell is `'R'`, reset energy to maximum
- If `mask == fullMask`, return the current number of steps

## 4. Pruning with bestEnergy

Maintain:

`bestEnergy[x][y][mask]`

It stores the **maximum energy** with which we have reached a particular `(x, y, mask)`.

If:

`newEnergy <= bestEnergy[x][y][newMask]`

skip the state because reaching the same position with the same collected litter but more energy is always better.

Otherwise, update `bestEnergy` and add the state to the queue.

## Why BFS?

Every move costs `1`, so BFS explores states in increasing order of moves. Therefore, the first state that collects all litter gives the minimum number of moves.

## Complexity

Let `k` be the number of litter cells.

**Time:** `O(m × n × 2^k × energy)`

**Space:** `O(m × n × 2^k)`