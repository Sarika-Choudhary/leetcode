# Sort Colors

## Intuition
Use Dutch National Flag algorithm with three pointers: low, mid, high. Partition array into three regions: 0s, 1s, and 2s.

## Approach
1. Initialize low = 0, mid = 0, high = n-1
2. While mid <= high:
   - If nums[mid] == 0: swap with low, increment both low and mid
   - If nums[mid] == 1: only increment mid
   - If nums[mid] == 2: swap with high, only decrement high
3. Array is sorted in-place

## Complexity Analysis
- **Time Complexity:** O(n) - single pass through array
- **Space Complexity:** O(1) - only using pointers
