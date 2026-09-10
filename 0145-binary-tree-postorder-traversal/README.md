# Binary Tree Postorder Traversal

## Intuition
Postorder traversal visits Left -> Right -> Root. Use recursion to traverse in this order.

## Approach
1. Create helper function postorder(root, ans)
2. Base case: if root is null, return
3. Recursive steps:
   - Traverse left subtree
   - Traverse right subtree
   - Add current node's value to result
4. Call helper and return result

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(h) - recursion stack height
