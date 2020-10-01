primes = []
arr = [False for i in range(40001)]
for i in range(2, 40001):
    if arr[i] == False:
        primes.append(i)
        for j in range(i,40001, i):
            arr[j] = True


def go(x,k):
    cnt = 0
    for i in primes:
        while x % i == 0:
            x = x // i
            cnt += 1
    
    if x != 1:
        cnt += 1
    
    if cnt >= k:
        return 1
    else:
        return 0


t = int(input())
while t > 0:
    t -= 1
    x, k = map(int, input().split())
    print(go(x,k))