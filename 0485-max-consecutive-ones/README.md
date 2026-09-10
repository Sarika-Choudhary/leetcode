# Max Consecutive Ones

## Intuition
Maintain a counter for consecutive ones. Reset counter to 0 when encountering 0.

## Approach
1. Initialize cnt = 0, maxi = 0
2. Iterate through array:
   - If nums[i] == 1, increment cnt
   - Else reset cnt to 0
   - Update maxi with current cnt
3. Return maxi

## Complexity Analysis
- **Time Complexity:** O(n) - single pass through array
- **Space Complexity:** O(1) - only using variables
