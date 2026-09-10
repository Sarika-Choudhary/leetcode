# Binary Tree Preorder Traversal

## Intuition
Preorder traversal visits Root -> Left -> Right. Use recursion to traverse in this order.

## Approach
1. Create helper function preorder(root, ans)
2. Base case: if root is null, return
3. Recursive steps:
   - Add current node's value to result
   - Traverse left subtree
   - Traverse right subtree
4. Call helper and return result

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(h) - recursion stack height
