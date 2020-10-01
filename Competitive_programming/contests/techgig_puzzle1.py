def main():
    t = int(input())
    while t > 0:
        t -= 1
        n = int(input())
        names = list(map(str, input().split()))
        ans  = ord(names[0][0])
        initials = [names[0][0]]
        for i in range(1,len(names)):
            initials.append(names[i][0])
            ans = ans ^ ord(names[i][0])
        print(''.join(initials))
        print("I am Alone " + chr(ans))


main()