# def multiply(a,b):
#     c = [[0 for i in range(len(a[0]))] for j in range(len(a))]

#     for i in range(len(a)):
#         for j in range(len(a[0])):
#             for k in range(len(a[0])):
#                 c[i][j] ^= a[i][k] * b[k][j]
#     return c

# def power(a,n):
#     I = [[0 for i in range(len(a[0]))] for j in range(len(a))]

#     for i in range(len(a)):
#         for j in range(len(a[0])):
#             if i == j:
#                 I[i][j] = 1
    
#     while n > 0:
#         if n & 1:
#             I = multiply(a,I)
#             n -= 1
#         else:
#             a = multiply(a,a)
#             n = n // 2
#     return a
# def findNthTerm(a,b,n):
#     A = [[a],[b]]
#     C = power(A,n)

#     return C[0][0] ^ C[1][0]
# t = int(input())

def findNthTerm(a,b,n):
    k = n % 3
    if k == 0:
        return a
    elif k == 1:
        return b
    else:
        return a ^ b
while t > 0:
    t -= 1
    a,b,n = map(int, input().split())
    ans = findNthTerm(a,b,n)
    print(ans)


