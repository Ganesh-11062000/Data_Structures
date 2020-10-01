
def largest_pallindromic_product(n):
    max = -1
    for i in range((10**n) -1, 10**(n-1),-1):
        for j in range((10**n) -1, 10**(n-1),-1):
            num = i * j
            str_num = str(num)
            if str_num[::] == str_num[::-1]:
                if num > max:
                    max = num
    return max

print(largest_pallindromic_product(3))