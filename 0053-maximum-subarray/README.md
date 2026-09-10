# Maximum Subarray

## Intuition
Use Kadane's algorithm: maintain running sum. If sum becomes negative, reset it to 0 because starting fresh gives better result.

## Approach
1. Initialize maxi = INT_MIN, sum = 0
2. Iterate through array:
   - Add current element to sum
   - Update maxi if sum is greater
   - If sum becomes negative, reset to 0
3. Return maxi

## Complexity Analysis
- **Time Complexity:** O(n) - single pass through array
- **Space Complexity:** O(1) - only using variables
