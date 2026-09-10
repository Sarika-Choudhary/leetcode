# Insert into a Binary Search Tree

## Intuition
Use BST property to find correct position: if val < node, go left; else go right.

## Approach
1. Base case: if root is null, create and return new node with val
2. If val < root->val, insert into left subtree recursively
3. Else insert into right subtree recursively
4. Return modified root

## Complexity Analysis
- **Time Complexity:** O(h) - where h is tree height, O(log n) average, O(n) worst
- **Space Complexity:** O(h) - recursion stack height
