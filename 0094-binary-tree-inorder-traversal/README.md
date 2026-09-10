# Binary Tree Inorder Traversal

## Intuition
Inorder traversal visits Left -> Root -> Right. Use recursion to traverse in this order.

## Approach
1. Create a helper function inorder(root, ans)
2. Base case: if root is null, return
3. Recursive steps:
   - Traverse left subtree
   - Add current node's value to result
   - Traverse right subtree
4. Call helper and return result

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(h) - recursion stack height, where h is tree height
