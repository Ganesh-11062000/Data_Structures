def sum_square_diff(n):
    sum_of_squares = (n * (n+1) * (2*n+1)) / 6
    sum1 = (n*(n+1)) / 2
    square_of_sum = sum1 * sum1
    diff = square_of_sum - sum_of_squares
    return diff

print(sum_square_diff(100))