t = int(input())

while t > 0:
    t -= 1
    n,m,k = map(int, input().split())
    ans = []
    for i in range(n):
        ans[i] =list(map(int, input().split()))
        
