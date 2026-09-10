# Diameter of Binary Tree

## Intuition
Diameter = longest path between any two nodes. At each node, diameter could be left_height + right_height.

## Approach
1. Use DFS to compute heights and track diameter
2. Create height function:
   - Base case: if node is null, return 0
   - Calculate left and right heights
   - Update global diameter = max(diameter, left + right)
   - Return 1 + max(left, right)
3. Call height(root) and return diameter

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(h) - recursion stack height
