# Contains Duplicate II

## Intuition
Use hash map to store element -> last seen index. If current element exists in map and distance from last occurrence <= k, return true.

## Approach
1. Create unordered_map for element -> index
2. Iterate through array:
   - If element exists in map and current_index - map[element] <= k:
     - Return true
   - Update map[element] = current_index
3. Return false

## Complexity Analysis
- **Time Complexity:** O(n) - single pass through array
- **Space Complexity:** O(min(n, k)) - hash map size bounded by k
