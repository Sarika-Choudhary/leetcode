# Search in Rotated Sorted Array II

## Intuition
Modified binary search handling duplicates. When nums[left] == nums[mid] == nums[right], shrink the search space by moving pointers inward.

## Approach
1. Use left and right pointers for binary search
2. While left <= right:
   - If nums[mid] == target, return true
   - If nums[l] == nums[mid] == nums[r]: shrink by incrementing l and decrementing r
   - Else if left half is sorted [nums[l] <= nums[mid]]:
     - Check if target is in [nums[l], nums[mid]], search left half
     - Else search right half
   - Else right half is sorted:
     - Check if target is in [nums[mid], nums[r]], search right half
     - Else search left half
3. Return false if not found

## Complexity Analysis
- **Time Complexity:** O(log n) average, O(n) worst case (many duplicates)
- **Space Complexity:** O(1) - only using pointers
