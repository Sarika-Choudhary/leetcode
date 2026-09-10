# Subarray Sum Equals K

## Intuition
Use prefix sum array. For each position, calculate prefix sum and count how many previous prefix sums differ by k.

## Approach
1. Create prefix array where prefix[i+1] = sum of elements from 0 to i
2. For each pair (i, j):
   - If prefix[j+1] - prefix[i] == k, increment count
3. Return count

## Complexity Analysis
- **Time Complexity:** O(n²) - nested loops to check all subarrays
- **Space Complexity:** O(n) - prefix array

*Note: This can be optimized to O(n) using hash map approach.*
