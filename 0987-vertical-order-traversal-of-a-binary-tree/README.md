# Vertical Order Traversal of a Binary Tree

## Intuition
Group nodes by column (vertical position). For nodes at same column but different rows, sort by row then value.

## Approach
1. Use BFS with tuple queue storing (node, row, col)
2. Use map: col -> list of (row, value) pairs
3. While queue not empty:
   - Process tuple, add (row, val) to map[col]
   - Push left child with (row+1, col-1)
   - Push right child with (row+1, col+1)
4. For each column in map:
   - Sort pairs by row and value
   - Extract values and add to result
5. Return result

## Complexity Analysis
- **Time Complexity:** O(n log n) - sorting nodes within columns
- **Space Complexity:** O(n) - map and queue storage
