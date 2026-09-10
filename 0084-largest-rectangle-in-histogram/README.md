# Largest Rectangle in Histogram

## Intuition
For each bar, find the range where it can extend (left and right boundaries). Use a stack to efficiently find boundaries.

## Approach
1. Create left[] array: for each index, find the nearest smaller height on the left
   - Use stack to track indices in increasing order of heights
   - Pop while top has greater height, set left[i] to top or -1
2. Create right[] array: for each index, find the nearest smaller height on the right
   - Similar process but iterate from right to left
3. For each bar, calculate area = height[i] * (right[i] - left[i] - 1)
4. Return maximum area

## Complexity Analysis
- **Time Complexity:** O(n) - each element pushed and popped from stack once
- **Space Complexity:** O(n) - for left[], right[] arrays and stack
