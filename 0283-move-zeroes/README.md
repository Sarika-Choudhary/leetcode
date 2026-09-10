# Move Zeroes

## Intuition
Use two pointer approach. Find first zero (j), then swap all non-zero elements with positions starting from j.

## Approach
1. Find first zero position and store in j
2. If no zeros found (j == -1), return
3. Iterate from j+1 to end:
   - If element is non-zero, swap with position j and increment j
4. All zeros are now at the end

## Complexity Analysis
- **Time Complexity:** O(n) - single pass through array
- **Space Complexity:** O(1) - in-place modification
