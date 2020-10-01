
# brute force :::Dont even dare to run..It will take a long...really long :-)
def sum_of_even_fibonacci(n):
    current,prev = 2,1
    sum = 2
    count = 2
    while count != n:
        next = current + prev
        if not (next & 1):
            sum += next
            print(sum)
        count += 1
        current,prev = next,current
    print(count)
    return sum

def smart_even_fibonacci_sum(n):
    current,prev = 8,2
    sum = 10
    count = 2
    while True:
        next = 4*current + prev
        if next >= n: return sum
        sum += next
        current,prev = next,current
print(smart_even_fibonacci_sum(4000000))
        