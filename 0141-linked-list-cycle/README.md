# Linked List Cycle

## Intuition
Use Floyd's cycle detection algorithm (slow and fast pointers). If cycle exists, they will meet.

## Approach
1. Initialize slow = head, fast = head
2. While fast and fast->next exist:
   - Move slow one step
   - Move fast two steps
   - If slow == fast, cycle detected, return true
3. If loop ends, no cycle, return false

## Complexity Analysis
- **Time Complexity:** O(n) - in worst case traverse all nodes
- **Space Complexity:** O(1) - only using pointers
