# Binary Tree Level Order Traversal II

## Intuition
Same as level order traversal but reverse the final result to get bottom-up order.

## Approach
1. Perform standard BFS level order traversal
2. Store levels in result vector
3. Reverse the result vector
4. Return reversed result

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once, O(n) for reverse
- **Space Complexity:** O(w) - maximum level width
