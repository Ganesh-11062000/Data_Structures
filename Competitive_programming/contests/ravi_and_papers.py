from math import factorial

def permute(a,b):
    return int((factorial(a) / factorial(a-b)))


def go(x,y,z,s,m,c,q1,q2,q3):
    len_of_paper = s + m + c
    total_ways_of_simple_questions = permute(x,s)
    total_ways_of_medium_questions = permute(y,m)
    total_ways_of_hard_questions = permute(z,c)
    total = total_ways_of_simple_questions + total_ways_of_medium_questions + total_ways_of_hard_questions
    
    total1 = 
    return total,total1

x = int(input())
s = int(input())
y = int(input())
m = int(input())
z = int(input())
c = int(input())

q1,q2 = input().split()

q3 = input()

total_without_constraints, total_with_constraints = go(x,y,z,s,m,c,q1,q2,q3)

print(total_without_constraints)
print(total_with_constraints)