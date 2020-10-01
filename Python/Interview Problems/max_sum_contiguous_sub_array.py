def max_sum(arr):
    max_so_far = arr[0]
    curr_max = arr[0]
    n = len(arr)
    for i in range(1,n):
        curr_max = max(arr[i],curr_max + arr[i])
        max_so_far = max(max_so_far,curr_max)
    
    return max_so_far

arr = [-2,3,3,5,3,-1]

print(max_sum(arr))
