# Add Two Numbers

## Intuition
Simulate adding two numbers digit by digit, handling carry just like manual addition. Use a dummy node to simplify list construction.

## Approach
1. Create a dummy node and current pointer to track the result list
2. Initialize carry to 0
3. While either list has nodes or carry exists:
   - Extract values from both lists (use 0 if node is null)
   - Calculate sum including carry
   - Extract new carry (sum / 10) and digit (sum % 10)
   - Add new node with digit to result
   - Move to next nodes
4. Return dummy->next (skip dummy node)

## Complexity Analysis
- **Time Complexity:** O(max(m, n)) - where m and n are lengths of the two lists
- **Space Complexity:** O(max(m, n)) - for the result list
