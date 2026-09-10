# Two Sum

## Intuition
Use the two-pointer technique on a sorted array. By storing elements with their original indices before sorting, we can find the pair that sums to the target and return the original indices.

## Approach
1. Create pairs of (value, original_index) and store in a vector
2. Sort the vector by values
3. Use two pointers (left at start, right at end)
4. If sum equals target, return the original indices
5. If sum is greater than target, move right pointer left
6. If sum is less than target, move left pointer right

## Complexity Analysis
- **Time Complexity:** O(n log n) - dominated by sorting
- **Space Complexity:** O(n) - for storing pairs with indices
