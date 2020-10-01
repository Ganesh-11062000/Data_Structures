T = int(input())
INF = 100000000000
while T > 0:
    T -= 1
    N, M = map(int,input().split())
    pintu_dict = {}
    for i in range(1,M+1):
        pintu_dict[i] = 0

    F = list(map(int,input().split()))
    P = list(map(int,input().split()))
    min_price = INF 
    for i in range(0,N):
        pintu_dict[F[i]] += P[i]

    for i in range(1 , M+1):
        if pintu_dict[i] < min_price and pintu_dict[i] != 0:
            min_price = pintu_dict[i]        
    print(min_price)
    


    
