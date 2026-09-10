# Find First and Last Position of Element in Sorted Array

## Intuition
Perform two binary searches: one to find the first occurrence by moving left even when target is found, and another to find the last occurrence by moving right when target is found.

## Approach
1. First binary search for leftmost position:
   - When nums[mid] < target, move left = mid + 1
   - When nums[mid] >= target, move right = mid - 1 (continue searching left)
   - Store mid in ans[0] when nums[mid] == target
2. Second binary search for rightmost position:
   - When nums[mid] > target, move right = mid - 1
   - When nums[mid] <= target, move left = mid + 1 (continue searching right)
   - Store mid in ans[1] when nums[mid] == target
3. Return [-1, -1] if target not found

## Complexity Analysis
- **Time Complexity:** O(log n) - two binary searches
- **Space Complexity:** O(1) - only using pointers
