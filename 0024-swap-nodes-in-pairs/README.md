# Swap Nodes in Pairs

## Intuition
Use recursion to swap pairs. For each node, swap it with the next node and recursively process the rest of the list.

## Approach
1. Base case: if head or head->next is null, return head
2. Store first and second nodes
3. Connect first->next to the result of recursively processing second->next
4. Connect second->next to first
5. Return second as new head

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(n) - recursion call stack
