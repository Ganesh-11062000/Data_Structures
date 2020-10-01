import heapq 

class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        n = len(stones)
        if n == 1:
            return stones[0]
        
        for i in range(n):
            stones[i] = -stones[i]
            
        else:
            heapq.heapify(stones)
            l = n
            while l >= 2:
                x = -heapq.heappop(stones)
                y = -heapq.heappop(stones)

                if x == y:
                    l -= 2
                    heapq.heappush(stones,0)

                else:
                    heapq.heappush(stones, -abs(x-y))
                    l -= 1
            return -heapq.heappop(stones)