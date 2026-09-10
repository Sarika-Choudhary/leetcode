# Balanced Binary Tree

## Intuition
A tree is balanced if for each node, the height difference between left and right subtrees is at most 1. Use post-order traversal to check while computing heights.

## Approach
1. Create height function that returns -1 if unbalanced, else height
2. For each node:
   - Recursively check left subtree (return -1 if unbalanced)
   - Recursively check right subtree (return -1 if unbalanced)
   - If height difference > 1, return -1
   - Else return 1 + max(left_height, right_height)
3. Return true if height(root) != -1

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(h) - recursion stack height
