# Remove Duplicates from Sorted Array

## Intuition
Use two pointers: i marks the position to place unique elements, j iterates through the array. When nums[i] != nums[j], place nums[j] at position i+1.

## Approach
1. Initialize i at 0 (position for unique elements)
2. Iterate j from 1 to n
3. For each j:
   - If nums[i] != nums[j]:
     - Increment i
     - Place nums[j] at nums[i]
4. Return i+1 (count of unique elements)

## Complexity Analysis
- **Time Complexity:** O(n) - single pass through array
- **Space Complexity:** O(1) - only using pointers
