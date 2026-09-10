# Longest Substring Without Repeating Characters

## Intuition
Use a sliding window with a hash map to track the last seen position of each character. Expand the window and when a duplicate is found, shrink from the left.

## Approach
1. Use unordered_map to store character -> last seen index
2. Maintain left pointer (window start) and right pointer (iterating through string)
3. For each character at right pointer:
   - If character exists in map and is within current window, move left pointer
   - Update character's last seen index
   - Calculate current window length and update maximum
4. Return the maximum length found

## Complexity Analysis
- **Time Complexity:** O(n) - single pass through the string
- **Space Complexity:** O(min(n, m)) - where m is the character set size (26 for lowercase letters)
