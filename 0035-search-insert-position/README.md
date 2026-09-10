# Search for a Position to Insert Value

## Intuition
Use binary search. When target is found, return its position. When not found, the left pointer will be at the insertion position.

## Approach
1. Initialize left = 0, right = n-1
2. While left <= right:
   - Calculate mid
   - If nums[mid] == target, return mid
   - If nums[mid] < target, search right half (left = mid + 1)
   - Else search left half (right = mid - 1)
3. Return left (insertion position)

## Complexity Analysis
- **Time Complexity:** O(log n) - binary search
- **Space Complexity:** O(1) - only using pointers
