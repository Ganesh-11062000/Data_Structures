def main():
    t = int(input())
    while t > 0:
        t -= 1
        n = int(input())
        g_r = list(map(int, input().split()))
        opp = list(map(int, input().split()))

        g_r.sort()
        opp.sort()
        # print(g_r)
        # print(opp)
        cnt = 0
        i = 0
        while i < n:
            if g_r[i] > opp[i]:
                cnt += 1
            else: break
            i += 1
        k = i
        if i < n:
            for j in range(i, n):
                if g_r[j] > opp[k]:
                    cnt += 1
                    k += 1

        print(cnt)


main()