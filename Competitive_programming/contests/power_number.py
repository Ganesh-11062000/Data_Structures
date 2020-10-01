def getans(x):
    if x==2: return True
    seen = set([1])
    lim = int(x**0.5)
    for a in range(2,lim+1):
        val = a*a
        while val<x:
            seen.add(val)
            if x-val in seen: return True
            val *= a
    return False
        
t = int(input())

while t > 0:
    t -= 1

    l,r = map(int, input().split())
    cnt = 0
    ans = []
    for x in range (l,r + 1):
        if getans(x):
            cnt += 1
            ans.append(x)
    print(cnt)
    print(ans)