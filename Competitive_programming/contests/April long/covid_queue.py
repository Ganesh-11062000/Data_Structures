def go(seq):
    prev_loc = -1
    for i in range(0,len(seq)):
        if seq[i] == 1:
            if prev_loc >=0:
                if i - prev_loc < 6:
                    return "NO"
                else:
                    prev_loc = i
            else: prev_loc = i
    return "YES"

t = int(input())
while t > 0:
    t -= 1
    n = int(input())

    seq = list(map(int, input().split()))
    print(go(seq))