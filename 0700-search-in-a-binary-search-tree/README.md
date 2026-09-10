# Search in a Binary Search Tree

## Intuition
Use BST property: if target < root, search left; if target > root, search right.

## Approach
1. Base case: if root is null, return null
2. If root->val == target, return root
3. If target < root->val, return searchBST(root->left, target)
4. Else return searchBST(root->right, target)

## Complexity Analysis
- **Time Complexity:** O(h) - where h is tree height, O(log n) average, O(n) worst
- **Space Complexity:** O(h) - recursion stack height
