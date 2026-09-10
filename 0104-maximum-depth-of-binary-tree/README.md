# Maximum Depth of Binary Tree

## Intuition
Recursively find maximum depth: depth is 1 + max(left_depth, right_depth).

## Approach
1. Base case: if root is null, return 0
2. Recursive case:
   - Get max depth of left subtree
   - Get max depth of right subtree
   - Return 1 + max of both

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(h) - recursion stack height
