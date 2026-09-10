# Binary Search

## Intuition
Divide search space in half each time. If target equals mid, return mid. Otherwise, eliminate half based on comparison.

## Approach
1. Initialize left = 0, right = n-1
2. While left <= right:
   - Calculate mid = left + (right - left) / 2
   - If nums[mid] == target, return mid
   - If nums[mid] < target, left = mid + 1 (search right)
   - Else right = mid - 1 (search left)
3. Return -1 if not found

## Complexity Analysis
- **Time Complexity:** O(log n) - halve search space each iteration
- **Space Complexity:** O(1) - only using pointers
