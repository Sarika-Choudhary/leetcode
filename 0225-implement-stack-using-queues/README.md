# Implement Stack Using Queues

## Intuition
Use a queue and simulate stack behavior. On push, place new element and rotate queue to bring it to front.

## Approach
1. Use single queue for storage
2. Push operation:
   - Add element to queue
   - Get queue size
   - Move all previous elements to back (rotate n-1 times)
3. Pop: remove and return front
4. Top: return front without removing
5. Empty: check if queue is empty

## Complexity Analysis
- **Time Complexity:** O(n) for push, O(1) for pop/top/empty
- **Space Complexity:** O(n) - queue storage
