# Fibonacci Number

## Intuition
Compute Fibonacci recursively: fib(n) = fib(n-1) + fib(n-2) with base cases fib(0)=0, fib(1)=1.

## Approach
1. Base case: if n <= 1, return n
2. Recursive case: return fib(n-1) + fib(n-2)

## Complexity Analysis
- **Time Complexity:** O(2^n) - exponential tree recursion (naive approach)
- **Space Complexity:** O(n) - recursion stack depth

*Note: This naive recursive solution is inefficient for large n. Memoization or DP would be better.*
