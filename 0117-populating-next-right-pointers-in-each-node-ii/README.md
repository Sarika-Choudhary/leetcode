# Populating Next Right Pointers in Each Node II

## Intuition
Same approach as Problem 116 - works for any binary tree, not just perfect trees. Use BFS and queue to connect nodes level-wise.

## Approach
1. Create queue and push root
2. While queue not empty:
   - Get current level size
   - For each node at current level:
     - Pop from queue
     - If not last node, connect to queue's front
     - Push left and right children (even if null)
3. Return root

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(w) - maximum level width
