# Intersection of Two Linked Lists

## Intuition
Handle the length difference. Move the pointer in the longer list ahead by the difference, then move both pointers together until they meet at intersection.

## Approach
1. Get lengths of both lists
2. Calculate length difference
3. Move pointer of longer list ahead by difference
4. Move both pointers together until they meet
5. Return the intersection node (or null if no intersection)

## Complexity Analysis
- **Time Complexity:** O(m + n) - where m, n are lengths of lists
- **Space Complexity:** O(1) - only using pointers
