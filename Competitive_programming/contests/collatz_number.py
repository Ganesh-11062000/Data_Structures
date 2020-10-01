def find_steps_of_collatz(n):
    steps = 0
    while n > 1:
        if n & 1:
            n = (3 * n) + 1
        else:
            n = n // 2
        steps += 1
    return steps

max = -1
num = 0
for i in range(1000000,1,-1):
    steps = find_steps_of_collatz(i)
    if steps > max:
        max = steps
        num = i
print(num, max)
    