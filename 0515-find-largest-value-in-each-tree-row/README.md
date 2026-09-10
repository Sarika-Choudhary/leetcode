# Find Largest Value in Each Tree Row

## Intuition
Use level-order traversal (BFS) to process nodes level by level and find maximum at each level.

## Approach
1. Create result vector and queue
2. Push root to queue
3. While queue not empty:
   - Get current level size
   - Initialize maxi = INT_MIN
   - Process all nodes at current level:
     - Pop node, update maxi
     - Push left and right children
   - Add maxi to result
4. Return result

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(w) - maximum level width
