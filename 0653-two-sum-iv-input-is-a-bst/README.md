# Two Sum IV - Input is a BST

## Intuition
Use hash set for O(1) lookups. While traversing tree, check if (k - current_value) exists in set.

## Approach
1. Use BFS with queue
2. Create unordered_set for seen values
3. While queue not empty:
   - Pop node
   - Check if (k - node->val) exists in set, return true if found
   - Insert node->val in set
   - Push left and right children
4. Return false if no pair found

## Complexity Analysis
- **Time Complexity:** O(n) - visit each node once
- **Space Complexity:** O(n) - hash set + queue
