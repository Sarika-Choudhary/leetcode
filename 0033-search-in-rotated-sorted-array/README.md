# Search in Rotated Sorted Array

## Intuition
Use modified binary search. Determine which half is sorted, then check if target lies in that half.

## Approach
1. Use left and right pointers for binary search
2. While left <= right:
   - Calculate mid
   - If nums[mid] == target, return mid
   - Check if left half [l, mid] is sorted (nums[l] <= nums[mid]):
     - If target is in range [nums[l], nums[mid]], search left half
     - Else search right half
   - Else right half is sorted:
     - If target is in range [nums[mid], nums[r]], search right half
     - Else search left half
3. Return -1 if not found

## Complexity Analysis
- **Time Complexity:** O(log n) - binary search
- **Space Complexity:** O(1) - only using pointers
