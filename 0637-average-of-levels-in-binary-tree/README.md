# Average of Levels in Binary Tree

## Intuition
Use level-order traversal (BFS) to process nodes level by level and calculate average at each level.

## Approach
1. Create result vector and queue
2. Push root to queue
3. While queue not empty:
   - Get current level size
   - Initialize sum = 0
   - Process all nodes at current level:
     - Pop node, add to sum
     - Push left and right children
   - Calculate average = sum / level_size
   - Add to result
4. Return result

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(w) - maximum level width
