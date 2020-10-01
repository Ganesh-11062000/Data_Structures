# a = [[12, 7, 3],
#      [4, 5, 6],
#      [7, 8, 9]]

# b = [[5, 8, 1, 2],
#      [6, 7, 3, 0],
#      [4, 5, 9, 1]]

a = [[3,2,1,],[5,9,8],[21,4,5]]
b = [[3,2,1,],[5,9,8],[21,4,5]]

def mul(a,b):
    sum = [[0 for q in range(len(a))] for p in range(len(a))]
    if len(a[0]) == len(b[0]):
        for i in range(0,len(a)):
            for j in range(0,len(a)):
                for k in range(0,len(a)):
                    sum[i][j] += a[i][j] * b[j][k]
    return sum

ans = mul(a,b)

print(ans)
