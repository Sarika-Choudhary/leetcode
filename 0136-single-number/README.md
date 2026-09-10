# Single Number

## Intuition
XOR has property: a ^ a = 0 and a ^ 0 = a. XORing all numbers cancels out pairs, leaving only the single number.

## Approach
1. Initialize xorr = 0
2. Iterate through all numbers:
   - XOR each number with xorr
3. Return xorr (contains the single number)

## Complexity Analysis
- **Time Complexity:** O(n) - single pass through array
- **Space Complexity:** O(1) - only using one variable
