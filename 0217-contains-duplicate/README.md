# Contains Duplicate

## Intuition
Sort the array. Check adjacent elements; if any two are equal, duplicates exist.

## Approach
1. Sort the array
2. Iterate from index 1 to n-1
3. If nums[i] == nums[i-1], return true
4. If loop completes, return false

## Complexity Analysis
- **Time Complexity:** O(n log n) - dominated by sorting
- **Space Complexity:** O(1) - sorting in-place
