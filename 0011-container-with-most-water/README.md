# Container With Most Water

## Intuition
Use two pointers starting from both ends. The area is determined by the shorter height, so always move the pointer pointing to the shorter height inward to potentially find a taller one.

## Approach
1. Initialize left pointer at start, right pointer at end
2. Calculate width as right - left
3. Calculate height as minimum of heights[left] and heights[right]
4. Update maximum area
5. Move pointer pointing to shorter height inward
6. Repeat until pointers meet

## Complexity Analysis
- **Time Complexity:** O(n) - single pass with two pointers
- **Space Complexity:** O(1) - only using pointers
