def colloatz(n):
    if n == 1:
        return 0
    elif n & 1:
        return colloatz(3 * n + 1) + 1
    else:
        return colloatz(n // 2) + 1

n = int(input("Enter n"))
print(colloatz(n))