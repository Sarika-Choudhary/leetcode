# Reverse Linked List

## Intuition
Iteratively reverse links by maintaining three pointers: prev, curr, nextNode. Reverse direction of each link as we traverse.

## Approach
1. Initialize prev = null, curr = head, nextNode = null
2. While curr is not null:
   - Store next node before changing link
   - Reverse the link (curr->next = prev)
   - Move prev to curr and curr to nextNode
3. Return prev (new head)

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(1) - only using pointers
