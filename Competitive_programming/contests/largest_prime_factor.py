import math 

def find_largest_prime_factor(n):
    factors = []
    for i in range(2,math.ceil(math.sqrt(n))+1):
        if (n % i == 0):
            while(n % i == 0):
                n = n // i
            factors.append(i)
    if n != 1:
        factors.append(n)
    return max(factors)

            
def largest_prime_factor(n):
    largest = find_largest_prime_factor(n)
    return largest

print(largest_prime_factor(600851475143))