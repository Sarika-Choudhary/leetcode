# Odd Even Linked List

## Intuition
Separate odd-indexed and even-indexed nodes, then connect the even list to the odd list.

## Approach
1. Separate odd and even nodes:
   - odd points to 1st node (odd index)
   - even points to 2nd node (even index)
   - Save even head for later connection
2. Traverse using odd and even pointers:
   - odd->next = odd->next->next (skip even)
   - even->next = even->next->next (skip odd)
3. Connect: odd->next = even_head
4. Return head

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(1) - only using pointers
