def List():
    L = ['a','b','c','d','e']

    #print List 
    print(L)
    # ['a', 'b', 'c', 'd', 'e']

    #Iterate over List
    for i in L:
        print(i)

    #length of List
    print(len(L))
    # 5

    #count occurances of ele in List L
    print(L.count('c'))
    # 1

    #get index of ele in List L
    print(L.index('c'))
    # 2

    #add ele at end of List L
    L.append('f')
    print(L)
    # ['a', 'b', 'c', 'd', 'e', 'f']

    #insert at specific index
    L.insert(0,'z')
    print(L)
    # ['z', 'a', 'b', 'c', 'd', 'e', 'f']

    #pop ele at specific index
    L.pop(2)
    print(L)
    # ['z', 'a', 'c', 'd', 'e', 'f']

    #remove ele from L
    L.remove('d')
    print(L)
    # ['z', 'a', 'c', 'e', 'f']
    #it raises Value Error if ele is not present in L

    #to make a new reversed list of L
    reversedList = L[-1::-1]
    print(reversedList)
    # ['f', 'e', 'c', 'a', 'z']

    #to reverse the List  L itself
    L.reverse()
    print(L)
    # ['f', 'e', 'c', 'a', 'z']

    #to make a new sorted list of L
    sortedList = sorted(L)
    print(sortedList)
    # ['a', 'c', 'e', 'f', 'z']

    #to sort the list L itself
    L.sort(reverse=True)
    print(L)
    # ['z', 'f', 'e', 'c', 'a']



def Tuple():
    T = ('a','b','c','d','e')
    #Note : To create a tuple with only one item, you have to add a comma after the item
    #ex :  T = ('1',)

    # print tuple T
    print(T)
    # ('a', 'b', 'c', 'd', 'e')

    #iterate over tuple
    for t in T:
        print(t)

    #however we can perform following operations
    # but can't modify actual tuple
    new_T = T + T
    print(new_T)
    # ('a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e')

    # to delete T completely
    del T


def Set():

    S1 = {1,2,3,4,5}
    S2 = {4,5,6,7,8,9}

    #  print Set
    print(S1)
    # {1, 2, 3, 4, 5}

    # add element to set
    S1.add(0)
    print(S1)
    # {0, 1, 2, 3, 4, 5}

    # remove a specific ele from Set
    S1.remove(0)
    print(S1)
    # {1, 2, 3, 4, 5}

    # Set operations

    # 1) Union
    S3 = S1.union(S2)      # S1 will not update
    print(S3)
    # {1, 2, 3, 4, 5, 6, 7, 8, 9}

    S1.update(S2)          # S1 = union(S1,S2)
    print(S1)
    # {1, 2, 3, 4, 5, 6, 7, 8, 9}

    # check subset & superset
    print(S2.issubset(S1))
    # True
    print(S1.issuperset(S2))
    # True

    # 2) Intersection
    print(S1.intersection(S2))
    # {4, 5, 6, 7, 8, 9}

    # 3) differences
    print(S1.difference(S2))    # S1 - S2
    # {1, 2, 3}

    S1.difference_update(S2)    # S1 = S1 - S2
    print(S1)
    # {1, 2, 3}

    # clear the set
    S1.clear()
    print(S1)
    # set()


def Dictionary():

    d1 = {1:'one',2:'two',3:'three',4:'four'}

    # print dict d1
    print(d1)                   
    # { 1: 'one', 2: 'two', 3: 'three', 4: 'four'}

    #print keys of dict d1
    print(list(d1.keys()))      
    # [1, 2, 3, 4]

    #print values of dict d1
    print(list(d1.values()))    
    # ['one', 'two', 'three', 'four']  

    # print key value pair as tuples
    print(list(d1.items()))     
    # [(1, 'one'), (2, 'two'), (3, 'three'), (4, 'four')]


    # get the value of the key
    print(d1.get(1))
    # one
    print(d1[1])
    # one

    # pop a value with specified key
    d1.pop(3)
    print(d1)
    # {1: 'one', 2: 'two', 4: 'four'}

    # add a new key-value pair
    # update existing key-value pair

    d1[5] = 'five'
    d1[4] = 'Four'
    print(d1)
    # {1: 'one', 2: 'two', 4: 'Four', 5: 'five'}


if __name__ == "__main__":

    List()
    print("\n\n")

    Tuple()
    print("\n\n")

    Set()
    print("\n\n")

    Dictionary()

    