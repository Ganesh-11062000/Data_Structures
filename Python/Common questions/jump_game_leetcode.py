def canJump(nums):
    n = len(nums)
    if n <= 0:
        return True
    interval = [0,0]
    while(True):
        try:
            can_reach = -1
            for i in range(interval[0],interval[1] + 1):
                can_reach = max(can_reach,i + nums[i])

            if can_reach >= n-1:
                return True
            
            interval = [interval[1]+1,can_reach]
            if interval[0] > interval[1]:
                return False
        except IndexError:
            return False
arr = [3,2,1,0,8]
# arr = [1,2,3,4]
# arr = [2,3,1,1,4]
# arr = [4,2,3,4]
# arr = [2,3,1,1,4]
print(canJump(arr))