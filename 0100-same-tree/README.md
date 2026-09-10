# Same Tree

## Intuition
Recursively check if both trees are identical: same structure and same values at each node.

## Approach
1. Base cases:
   - If both p and q are null, return true
   - If one is null and other isn't, return false
   - If values differ, return false
2. Recursive case:
   - Recursively check left subtrees and right subtrees
   - Return true only if both match

## Complexity Analysis
- **Time Complexity:** O(min(m, n)) - where m, n are sizes of trees (stop at first mismatch)
- **Space Complexity:** O(min(h1, h2)) - recursion stack height
