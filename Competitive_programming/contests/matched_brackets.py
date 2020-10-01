n = int(input())
p = list(map(int, input().split()))

depth = 0
max_depth = 0
depth_loc = 0
cnt = 0
max_cnt = 0
cnt_loc = 0
bracketStartIndex = 0

for i in range(1,n+1):
    if not depth:
        cnt = 0
        bracketStartIndex = i
    
    cnt += 1

    if p[i-1] == 1:
        depth += 1
    else:
        depth -= 1
    
    if depth > max_depth:
        depth_loc = i
        max_depth = depth
    
    if cnt > max_cnt:
        cnt_loc = bracketStartIndex
        max_cnt = cnt

print(max_depth, depth_loc,max_cnt,cnt_loc)