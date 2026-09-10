# Symmetric Tree

## Intuition
A tree is symmetric if its left and right subtrees are mirror images. Check this recursively by comparing node values and cross-comparing subtrees.

## Approach
1. Create helper function isMirror(left, right)
2. Base cases:
   - If both are null, return true
   - If one is null, return false
   - If values differ, return false
3. Recursive check:
   - Check if left.left mirrors right.right
   - Check if left.right mirrors right.left
4. Return isMirror(root->left, root->right)

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(h) - recursion stack height
