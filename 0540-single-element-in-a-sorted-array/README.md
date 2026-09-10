# Single Element in a Sorted Array

## Intuition
Use binary search with parity checking. In the correct half, the single element breaks the pairing pattern.

## Approach
1. Handle edge cases: if n==1 or first/last element is single, return it
2. Binary search (low=1, high=n-2):
   - If nums[mid] is single element, return it
   - Check pattern: if mid is even, it should pair with mid+1; if odd, pair with mid-1
   - If pattern is correct, single element is in right half, else left half
3. Return appropriate element

## Complexity Analysis
- **Time Complexity:** O(log n) - binary search
- **Space Complexity:** O(1) - only using pointers
