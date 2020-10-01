t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    if n == 1:
        print("1")
        print("1 1")
        continue
    print(n // 2)
    for i in range(0,n // 2):
        if n % 2 == 1 and i == 0:
            print("3 ",end = "")
        else:
            print("2 ", end = "")
        print(2 * i + 1,2 * i + 2,end = "")
        if n % 2 == 1:
            if i == 0:
                print("",n)
        # print()