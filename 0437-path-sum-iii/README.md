# Path Sum III

## Intuition
For each node as a potential path start, recursively count paths from that node that sum to target. Use DFS to explore all nodes.

## Approach
1. Create helper function findPath(node, targetSum):
   - Returns count of paths from node downward that sum to targetSum
   - Subtract current node value from target for recursive calls
2. Main function pathSum(node, targetSum):
   - Count paths starting at current node: findPath(node, targetSum)
   - Recursively count paths in left and right subtrees
3. Return total count

## Complexity Analysis
- **Time Complexity:** O(n²) - for each node, explore all nodes below it
- **Space Complexity:** O(h) - recursion stack height
