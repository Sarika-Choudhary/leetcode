# Populating Next Right Pointers in Each Node

## Intuition
Use BFS with queue. At each level, connect consecutive nodes using the queue's front pointer.

## Approach
1. Create queue and push root
2. While queue not empty:
   - Get current level size
   - Process all nodes at current level:
     - Pop front node
     - If not last node in level, connect to queue's front
     - Add left and right children to queue
3. Return root

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(w) - maximum level width
