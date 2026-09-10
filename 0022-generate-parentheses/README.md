# Generate Parentheses

## Intuition
Use backtracking to build valid parentheses combinations. At each step, add an opening bracket if we haven't used all n opens, and add a closing bracket if it doesn't exceed open count.

## Approach
1. Use backtrack function with parameters: open count, close count, n, current string, and result
2. Base case: when current string length equals 2*n, add to result
3. Recursive cases:
   - Add '(' if open < n (haven't used all opening brackets)
   - Add ')' if close < open (closing bracket count doesn't exceed opening)
4. Start with backtrack(0, 0, n, "", res)

## Complexity Analysis
- **Time Complexity:** O(4^n / √n) - number of valid parentheses sequences
- **Space Complexity:** O(n) - recursion depth
