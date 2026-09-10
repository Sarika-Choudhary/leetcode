# Rearrange Array Elements by Sign

## Intuition
Use two pointers: one for positive positions (pi, even indices) and one for negative positions (ni, odd indices). Place elements alternately.

## Approach
1. Create result array of size n
2. Initialize pi = 0 (positive index), ni = 1 (negative index)
3. Iterate through input array:
   - If nums[i] > 0:
     - ans[pi] = nums[i]
     - pi += 2 (next even position)
   - Else:
     - ans[ni] = nums[i]
     - ni += 2 (next odd position)
4. Return ans

## Complexity Analysis
- **Time Complexity:** O(n) - single pass through array
- **Space Complexity:** O(n) - result array
