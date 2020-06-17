print('\n############################### PERMUTATIONS ##################################\n')

# permutation -> in how many ways can you arrange n items 
# ( changing the order of elements in given list !)

from itertools import permutations

List = [1,2,1,3]

# to print all permutations of given list
print(list(permutations(List)))

# All elements are treated as unique based on their position and not their values.
# which means (2,1,1,3) (2,1,1,3) are two different permutations
# because indices of 1 in both cases are different !

print("\n")
# print all unique permutations without repetition
print(list(set(list(permutations(List)))))

print('\n')
# print permuation of specific group size ,let say 2
print(sorted(list(set(list(permutations(List,2))))))
# [(1, 1), (1, 2), (1, 3), (2, 1), (2, 3), (3, 1), (3, 2)]



print('\n############################### COMBINATIONS ##################################\n')

#combination -> in how many ways can we select m items from n items (m <=n)

# formula => nCr = (n!)/[(r!)(n-r)!]

from itertools import combinations

List = [1,2,3,4,5]      # n = 5

# print all combinations where m = 2 ( selecting 2 items from 5 )

print(list(combinations(List,2)))
# [(1, 2), (1, 3), (1, 4), (1, 5), (2, 3), (2, 4), (2, 5), (3, 4), (3, 5), (4, 5)]

# Note : Like List we can perform same operations on String as well !
print("\n")

country_name = "INDIA"
print(list(combinations(country_name,4)))
# [('I', 'N', 'D', 'I'), ('I', 'N', 'D', 'A'), ('I', 'N', 'I', 'A'), ('I', 'D', 'I', 'A'), ('N', 'D', 'I', 'A')]
# Note : we know that ('I', 'N', 'D', 'A') and ('N', 'D', 'I', 'A') are same
# but they are tuples ,so they will be treated as different
# However two tuples with same elements will be equal if and only if
# the order of those elements are same

print(('I', 'N', 'D', 'A')==('N', 'D', 'I', 'A'))  
# False

print("\n")
# print unique combinations only
print(list(set(list(combinations(sorted(country_name),4)))))

# simple trick is to pass a sorted list or string 


print('\n############################### COUNTERS ##################################\n')

# it will generate a dictionary like object
# where key is element and value is occurances of element

from collections import Counter

s = "DATA STRUCTURES"

#initialize a counter variable
counter = Counter(s)

# let's print it
print(counter)
# Counter({'T': 3, 'A': 2, 'S': 2, 'R': 2, 'U': 2, 'D': 1, ' ': 1, 'C': 1, 'E': 1})
print("\n")

# iterate over this counter
for c in counter.elements():
    print(c)


# get the occurances of an element
print(counter['S'])
# 2
print("\n")

# we can also modify the count of an element 
counter['T'] -= 2
counter['E'] += 2
print(counter)
# Counter({'E': 3, 'A': 2, 'S': 2, 'R': 2, 'U': 2, 'D': 1, 'T': 1, ' ': 1, 'C': 1})
print("\ns")

# get top n-most comman elements
print(counter.most_common(3))
# [('E', 3), ('A', 2), ('S', 2)]
print("\n")

# to get unique elements
print(sorted(counter))
# [' ', 'A', 'C', 'D', 'E', 'R', 'S', 'T', 'U']


print('\n############################### ENUMERATE ##################################\n')

List = ["EAT","CODE","SLEEP","REPEAT"]

# normal iteration
for l in List:
    print(l)

print("\n")

# when indices of elements are also important
for index,value in enumerate(List):
    print(index,value)

# 0 EAT
# 1 CODE
# 2 SLEEP
# 3 REPEAT


print('\n############################### ZIP ##################################\n')

# when we need to somehow concat multiple lists item by item

first_name = ["Ganesh","Omkar","Ketan"]
last_name = ["Moota","Zemse","Mankar"]
marks = [80,60]


print(list(zip(first_name,last_name,marks)))
[('Ganesh', 'Moota', 80), ('Omkar', 'Zemse', 60)]

#Note : if lists are of unequal length then
# it will consider the length of smallest list

print('\n############################### MAP & FILTER ##########################\n')


# lambda notation
def square(x):
    return x*x

x = 2
print(square(x))            # 4
print((lambda x:x*x)(x))    # 4
# also known as anonymous function
print("\n")

List = [1,2,3,4,5]

# create a new list where every element in List is squared
print(list(map(lambda x:x**2,List)))
# [1, 4, 9, 16, 25]
print("\n")

# advance example on map
print(list(map(lambda names:names[0]+" "+names[1],zip(first_name,last_name))))
# ['Ganesh Moota', 'Omkar Zemse', 'Ketan Mankar']
print("\n")

# filter
print(list(filter(lambda n: (n%2==0),List)))
# [2, 4]
# here we need to mention the if condition

# advance example on filter
# print names of those who scored more than 70

first_name = ["Ganesh","Omkar","Ketan"]
last_name = ["Moota","Zemse","Mankar"]
score = [80,60,90]

print(list(map(lambda names:names[0]+" "+names[1],filter(lambda s:(s[2]>70),zip(first_name,last_name,score)))))
# ['Ganesh Moota', 'Ketan Mankar']
