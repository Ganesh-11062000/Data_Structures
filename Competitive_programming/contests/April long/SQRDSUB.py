t = int(input())

while t > 0:
    t -= 1
    n = int(input())
    arr = []
    arr.append([-1,0])
    a = list(map(int, input().split()))
    for i in range(0,n):
        x = abs(a[i])
        if x % 4 == 2:
            arr.append([i,1])
        elif x % 4 == 0:
            arr.append([i,0])
    arr.append([n,0])

    res = n * (n + 1)
    res = res // 2
    l = len(arr)

    for i in range(1, l-1):
        if arr[i][1] == 0:
            continue
        tmp = arr[i][0] - arr[i-1][0]

        tmp = tmp * (arr[i + 1][0] -arr[i][0])
        res = res -tmp
    print(res)