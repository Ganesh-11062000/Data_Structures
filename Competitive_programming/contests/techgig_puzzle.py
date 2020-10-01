def go():
    t = int(input())
    while t > 0:
        t -= 1
        msg = list(input())
        code = list(input())
        for i in range(len(msg)):
            if not(int(code[i]) & 1):
                a = ord(msg[i])
                a = a + int(code[i])
                if a > ord('z'):
                    a = a - 26
                msg[i] = chr(a)
            else:
                a = ord(msg[i])
                a = a - int(code[i])
                if a < ord('a'):
                    a = a + 26

                msg[i] = chr(a)
        print(''.join(msg))


if __name__ == "__main__":
    go()

# 2
# fgjkl
# 23145
# poliut
# 342561

# expected

# hdiog
# msndas

# actual
# hdkgq
# sknd{s