# Maximum Product Subarray

## Intuition
Track both maximum and minimum product ending at current position (minimum becomes maximum after multiplying by negative). Update answer with maximum found.

## Approach
1. Initialize currMax = nums[0], currMin = nums[0], ans = nums[0]
2. Iterate from index 1:
   - Store prevMax and prevMin
   - currMax = max(nums[i], prevMax * nums[i], prevMin * nums[i])
   - currMin = min(nums[i], prevMax * nums[i], prevMin * nums[i])
   - Update ans with currMax
3. Return ans

## Complexity Analysis
- **Time Complexity:** O(n) - single pass through array
- **Space Complexity:** O(1) - only using variables
