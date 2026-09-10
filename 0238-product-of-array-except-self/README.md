# Product of Array Except Self

## Intuition
Use prefix and suffix products. answer[i] = product of all elements before i × product of all elements after i.

## Approach
1. First pass (left to right) - calculate prefix products:
   - answer[i] = product of all elements before index i
   - Maintain prefix variable updated as we go
2. Second pass (right to left) - multiply with suffix products:
   - answer[i] *= product of all elements after index i
   - Maintain suffix variable updated as we go
3. Return answer

## Complexity Analysis
- **Time Complexity:** O(n) - two passes through array
- **Space Complexity:** O(1) - not counting output array
