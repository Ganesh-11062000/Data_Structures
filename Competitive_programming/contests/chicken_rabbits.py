# we have 'heads' no of heads and 'legs' no of legs  
# we need to find solution to no of chickens and no of rabbits

def solutions(heads, legs):
    ns = "No solutions"

    for i in range(heads + 1):
        j = heads - i
        if 2*i + 4*j == legs:
            return i,j
    return ns, ns

print(solutions(35,94))