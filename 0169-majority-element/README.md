# Majority Element

## Intuition
Use Boyer-Moore voting algorithm: maintain a candidate and count. When count reaches 0, pick new candidate. The remaining candidate is the majority.

## Approach
1. First pass - find candidate:
   - Initialize cnt = 0
   - For each element:
     - If cnt == 0, set candidate = nums[i], cnt = 1
     - Else if nums[i] == candidate, cnt++
     - Else cnt--
2. Second pass - verify candidate:
   - Count occurrences of candidate
   - If count > n/2, return candidate

## Complexity Analysis
- **Time Complexity:** O(n) - two passes through array
- **Space Complexity:** O(1) - only using variables
