# initial position of magic square = (i,j) = (n/2,n-1)
# magic constant / sum = M = (n*(n^2 + 1))/2
# next position = (i-1, j+1) where (i,j) is current position
# if at any point row number becomes -1 then wrap it to n - 1
# if at any point column number becomes n then wrap it to 0
# if the magic square already contains a number at a calculated position, then decrement column by 2 and increment row by 1
# If the calculated row position is -1 & calculated column position is n, the new position would be: (0, n-2)

def create_magicSquare(sq, n):
    i = n // 2
    j = n - 1
    M = (n * (n*n + 1)) // 2
    no = 1
    
    while no < n*n:
        sq[i][j] = no
        no += 1
        i, j = i - 1, j + 1
        if i == -1 and j == n:
            i, j = 0, n - 2
        elif i == -1:
            i = n - 1
        elif j == n:
            j = 0
        
        if sq[i][j] != 0:
            i += 1
            j -= 2
        
        sq[i][j] = no
    return sq
        


if __name__ == "__main__":
    n = int(input("Enter dimenstion of magic square"))
    sq = [[0 for x in range(n)] for j in range(n)]
    sq = create_magicSquare(sq, n)
    for i in range(n):
        for j in range(n):
            print(sq[i][j], end = ' ')
        print()