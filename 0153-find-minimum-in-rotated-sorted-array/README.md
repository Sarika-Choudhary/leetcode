# Find Minimum in Rotated Sorted Array

## Intuition
Use binary search. If nums[mid] > nums[right], minimum is in right half. Otherwise, it's in left half including mid.

## Approach
1. Initialize left = 0, right = n-1
2. While left < right:
   - Calculate mid
   - If nums[mid] > nums[right]:
     - Minimum is in right half, left = mid + 1
   - Else:
     - Minimum is in left half (including mid), right = mid
3. Return nums[left]

## Complexity Analysis
- **Time Complexity:** O(log n) - binary search
- **Space Complexity:** O(1) - only using pointers
