mod = (10 ** 9) + 7
def go(p):
    p.sort(reverse = True)
    profit_so_far = 0
    for i in range(0, len(p)):
        if p[i] - i >= 0:
            price = p[i] - i
        else:
            price = 0
        profit_so_far += price
    return profit_so_far % mod
    

t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    p = list(map(int, input().split()))
    print(go(p))