# Remove All Adjacent Duplicates In String

## Intuition
Use a stack-like approach with string. When new character matches last character, remove it. Otherwise add it.

## Approach
1. Use string as stack (st)
2. Iterate through each character in s:
   - If st is not empty and st.back() == s[i]:
     - Remove last character (pop_back)
   - Else:
     - Add current character to st
3. Return st

## Complexity Analysis
- **Time Complexity:** O(n) - single pass through string
- **Space Complexity:** O(n) - result string storage
