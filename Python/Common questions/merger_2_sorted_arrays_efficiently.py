def nextgap(gap):
    if gap <= 1:
        return 0
    return ((gap//2) + (gap%2))

def merge(a1,a2):
    n = len(a1)
    m = len(a2)

    gap = m+n
    gap = nextgap(m+n)

    while gap > 0:
        i = 0

        while i + gap < n:
            if a1[i] > a1[i+gap]:
                a1[i],a1[i+gap] = a1[i+gap],a1[i]
            i += 1

        j = gap - n if gap > n else 0

        while i < n and j < m:
            if a1[i] > a2[j]:
                a1[i],a2[j] = a2[j],a1[i]

            i += 1
            j += 1
        if j < m:
            j = 0
            while j + gap < m:
                if a2[j] > a2[j+gap]:
                    a2[j],a2[j+gap] = a2[j+gap],a2[j]

                j += 1

        gap = nextgap(gap)

if __name__ == '__main__':
    a1 = [ 10, 27, 38, 43 ,82 ] 
    a2 = [ 3, 9 ] 
    merge(a1,a2)
    print(a1)
    print(a2)
