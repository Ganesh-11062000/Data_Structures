def pickingNumbers(a):
    d = {}
    for i in a:
        if i not in d.keys():
            d[i] = 1
        else:
            d[i] += 1
    # g,sg = 0,-1
    a.sort()
    m = max([i for i in d.values()])
    if a[0] == a[-1]:
        return d[a[0]]
    for i in range(0,len(a)-1):
        if a[i] == a[i+1]:
            continue
        if a[i + 1] - a[i] == 1:
            f = d[a[i]] + d[a[i + 1]]
            m = max(m,f)
        elif a[i+1] - a[i] == 0:
            f = d[a[i]]
            m = max(m,f)
    return m

if __name__ == "__main__":
    a = list(map(int, input().split()))
    print(pickingNumbers(a))