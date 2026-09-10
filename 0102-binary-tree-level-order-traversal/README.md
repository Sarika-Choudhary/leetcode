# Binary Tree Level Order Traversal

## Intuition
Use BFS with a queue to process nodes level by level.

## Approach
1. Create result vector and queue
2. Push root to queue
3. While queue is not empty:
   - Get current level size
   - Create vector for current level
   - Process all nodes at current level:
     - Pop front node, add value to level vector
     - Push left and right children if they exist
   - Add level vector to result
4. Return result

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(w) - where w is maximum width of tree
