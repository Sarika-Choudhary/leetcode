# Trapping Rain Water

## Intuition
Use two pointers moving inward, tracking the maximum height seen from both ends. Water trapped depends on the minimum of left_max and right_max at each position.

## Approach
1. Initialize left and right pointers, leftmax and rightmax to 0
2. While left < right:
   - If height[left] < height[right]:
     - If height[left] > leftmax, update leftmax
     - Else add leftmax - height[left] to water trapped
     - Move left pointer right
   - Else:
     - If height[right] > rightmax, update rightmax
     - Else add rightmax - height[right] to water trapped
     - Move right pointer left
3. Return total water trapped

## Complexity Analysis
- **Time Complexity:** O(n) - single pass with two pointers
- **Space Complexity:** O(1) - only using pointers and variables
