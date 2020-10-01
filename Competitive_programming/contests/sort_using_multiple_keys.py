from operator import itemgetter, attrgetter
def custom_sort(x):
    l = []
    while True:
        # s = input()
        for s in x:
            if not s:
                break
            l.append(tuple(s.split(",")))

    print (sorted(l, key=itemgetter(0,1)))

x = ["DAVID XI","DAVID XV", "MARY V", "ALAN XVI", "WILLIAM XII", "WILLIAM XIX", "HITLER II", "YANG VIII"]
# s = list(map(str,input().split()))
custom_sort(x)