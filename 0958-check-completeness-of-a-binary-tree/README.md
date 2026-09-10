# Check Completeness of a Binary Tree

## Intuition
A complete tree has all levels full except possibly the last which is filled left-to-right. Use BFS and check if any null is followed by non-null.

## Approach
1. Use level-order traversal with queue (push null for leaf children)
2. Track if null node has been encountered
3. Once nullFound is true, any non-null node means incomplete tree
4. Return false if we see non-null after null
5. Return true if BFS completes successfully

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(w) - maximum level width
