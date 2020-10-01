def smallest_multiple(n):
    i = 2520
    while True:
        for j in range(1,n + 1):
            if i % j != 0:
                break
        if j == n:
            return i
        i += 20

print(smallest_multiple(20))
            
            
