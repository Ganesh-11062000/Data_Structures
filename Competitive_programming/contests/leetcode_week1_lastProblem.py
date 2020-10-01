class Solution:
    def countElements(self, arr):
        s = set()
        for x in arr:
            s.add(x)
        cnt = 0
        for x in arr:
            if x+1 in s:
                cnt += 1
        return cnt

a = Solution()
a.countElements([1,2,3])