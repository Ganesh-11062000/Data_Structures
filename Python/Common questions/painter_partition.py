def no_of_painters(a,m):
    total = 0
    painters = 1

    for i in a:
        total += i

        if total > m:
            total = i
            painters += 1
    return painters

def find_minimum_cost(a,k):
    lo = max(a)
    hi = sum(a)

    while lo < hi:
        mid = lo + (hi - lo) // 2
        
        required_painters = no_of_painters(a,mid)

        if required_painters <= k:
            hi = mid

        else:
            lo = mid + 1

    return lo

a = [10,20,30,40]
print(find_minimum_cost(a,2))


