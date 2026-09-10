# Binary Tree Zigzag Level Order Traversal

## Intuition
Similar to level order traversal but alternate the direction of adding elements at each level.

## Approach
1. Use BFS with queue and direction flag (leftToRight)
2. At each level:
   - Create level array with size = level size
   - For each node:
     - If leftToRight, place at index i
     - Else place at index (size - 1 - i)
     - Add children to queue
3. Toggle direction for next level
4. Return result

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(w) - maximum level width
