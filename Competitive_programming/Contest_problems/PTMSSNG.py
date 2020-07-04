from collections import *

T = int(input())
c1 = Counter()
c2 = Counter()

for _ in range(T):
    N = int(input())

    for i in range(0,4*N - 1):
        L = [x for x in input().split()]
        c1[L[0]] += 1
        c2[L[1]] += 1

        if(c1[L[0]] == 2):
            del c1[L[0]]

        if(c2[L[1]] == 2):
            del c2[L[1]]

    t1,temp = c1.most_common(1)[0]
    t2,temp = c2.most_common(1)[0]
    print(t1,end = " ")
    print(t2)

    del c1[t1]
    del c2[t2]