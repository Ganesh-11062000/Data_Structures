def value(r): 
    if (r == 'I'): 
        return 1
    if (r == 'V'): 
        return 5
    if (r == 'X'): 
        return 10
    if (r == 'L'): 
        return 50
    return -1
  
def to_decimal(str): 
    res = 0
    i = 0
  
    while (i < len(str)): 
        s1 = value(str[i]) 
  
        if (i+1 < len(str)): 
            s2 = value(str[i+1]) 
            if (s1 >= s2):  
                res = res + s1 
                i = i + 1
            else: 
                res = res + s2 - s1 
                i = i + 2
        else: 
            res = res + s1 
            i = i + 1 
    return res   

def to_roman(num):
    x = ["", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"]
    i = ["", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"]
    tens =  x[(num%100) // 10] 
    ones = i[num%10]  
    ans = tens + ones
    return ans


def sortRoman(names):
    nm_list = []
    lit_list = []
    result = []
    for name in names:
        nm,lit = map(str, name.split())
        nm_list.append(nm)
        lit_list.append(to_decimal(lit))
    for i in range(0,len(nm_list)):
        for j in range(0, len(nm_list)):
            if nm_list[i] < nm_list[j]:
                nm_list[i],nm_list[j] = nm_list[j] , nm_list[i]
                lit_list[i],lit_list[j] = lit_list[j], lit_list[i]
            elif nm_list[i] == nm_list[j]:
                if lit_list[i] <= lit_list[j]:
                    nm_list[i],nm_list[j] = nm_list[j] , nm_list[i]
                    lit_list[i],lit_list[j] = lit_list[j], lit_list[i]
    
    for i in range(0, len(nm_list)):
        result.append(nm_list[i] + " " + to_roman(lit_list[i]))
    return result
    # for i in range(0,len(nm_list)):
    #     for j in range(0, len(nm_list)):


# def sortRoman(names):
#     result = []
#     # for name in names:
#     #     nm, lit = map(str,name.split())
#     #     lit = str(to_decimal(lit))
#     #     result.append(nm + " " + lit)
#     result = sort_custom(names)

    # result1 = []
    # for name in result:
    #     nm, lit = map(str,name.split())
    #     lit = to_roman(int(lit))
    #     result1.append(nm + " " + lit)
    # return result1

l = sortRoman(['Steven XL','Steven XVI','David IX', 'Mary XV','Mary XIII','Mary XX'])
print(l)