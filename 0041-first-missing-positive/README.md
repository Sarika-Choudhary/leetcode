# First Missing Positive

## Intuition
Store all positive numbers in a hash map. Then iterate from 1 to n+1 and find the first number not in the map.

## Approach
1. Create unordered_map to store positive numbers
2. Iterate through input array and store all positive numbers in map
3. Iterate from 1 to n+1:
   - If number is not in map, return it (this is the first missing positive)
4. If all numbers 1 to n exist, return n+1

## Complexity Analysis
- **Time Complexity:** O(n) - two passes through array
- **Space Complexity:** O(n) - hash map storage
