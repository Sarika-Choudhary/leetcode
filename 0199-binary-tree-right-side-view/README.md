# Binary Tree Right Side View

## Intuition
For each level, the rightmost node is visible. Use DFS visiting right subtree first; when res.size() == level, it's the first (rightmost) node at that level.

## Approach
1. Create helper function rightdfs(node, level, res)
2. If node is null, return
3. If res.size() == level, this is the rightmost node at this level, add to res
4. Recursively visit right subtree first with level+1
5. Then visit left subtree with level+1
6. Return result

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(h) - recursion stack height
