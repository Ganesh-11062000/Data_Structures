def count_set_bits(n):
    set_bits = 0
    while(n > 0):
        n = n & (n-1)
        set_bits += 1
    return set_bits

T = int(input())
INF = 100000000000
while T > 0:
    T -= 1
    N, Q = map(int,input().split())
    A = list(map(int,input().split()))
    n = len(A)
    while Q > 0:
        Q -= 1
        P = int(input())
        B = [i ^ P for i in A]
        set_bits_count = {}
        for i in B:
            set_bits_count[i] = count_set_bits(i)
        even = 0
        for val in set_bits_count.values():
            if not (val & 1):
                even += 1
        
        odd = n - even

        print(even, odd)

