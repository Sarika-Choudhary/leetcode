# Best Time to Buy and Sell Stock

## Intuition
Track the minimum price seen so far. For each price, calculate profit if sold at that price and update maximum profit.

## Approach
1. Initialize bestbuy = prices[0], maxprofit = 0
2. Iterate from index 1:
   - If current price < bestbuy, update bestbuy
   - Else calculate profit = current_price - bestbuy
   - Update maxprofit if profit is greater
3. Return maxprofit

## Complexity Analysis
- **Time Complexity:** O(n) - single pass through prices
- **Space Complexity:** O(1) - only using variables
