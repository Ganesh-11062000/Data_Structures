# FIND NUMBER OF DIGITS IN A GIVEN SUCH THAT the number of odd digits is even and no of even digits is odd

# CASE 1 if no is power of 10 ..then there is a pattern for this system

# no of such digits in range 0  to:

# 1 - 0
# 10 - 4
# 100 - 4
# 1000 - 45
# 10000 - 45
# 100000 - 454
# 1000000 - 454
# 10000000 - 4545
# 100000000 - 4545
# 1000000000 - 45454

values = { 
    1: 0, 
    10: 4, 
    100: 4, 
    1000: 454, 
    10000: 454, 
    100000: 45454, 
    1000000: 45454, 
    10000000: 4545454, 
    100000000: 4545454, 
    1000000000: 454545454, 
    10000000000: 454545454, 
    100000000000: 45454545454, 
    1000000000000: 45454545454, 
    10000000000000: 4545454545454, 
    100000000000000: 4545454545454, 
    1000000000000000: 454545454545454, 
    10000000000000000: 454545454545454, 
    100000000000000000: 45454545454545454, 
    1000000000000000000: 45454545454545454, 
}

def count_even_odd(val): 
    even = odd = 0
    while val > 0: 
        num = val % 10
        if num % 2 == 0: 
            even += 1
        else: 
            odd += 1
        val //= 10
  
    return even, odd 

def satisfies_condition(num): 
    even, odd = count_even_odd(num) 
    if even % 2 == 1 and odd % 2 == 0: 
        return True
    return False

def count_upto(val): 
  
    # If the value is already present in the 
    # values dict 
    if int(val) in values: 
        return values[int(val)] 
  
    # If the value is even 
    # Case 2 
    if len(val) % 2 == 0: 
        return values[int('1' + '0' * (len(val) - 1))] 
  
    val_len = len(val) 
    count = values[int('1' + '0' * (val_len - 1))] 
  
    # Now the problem is to count the desired 
    # numbers from 10**(val_len-1) + 1 to val 
    left_end = int('1' + '0' * (val_len - 1)) + 1
  
    # Case 3 
    # Eliminating all the even numbers 
    count += (int(val) - left_end) // 2
  
    if satisfies_condition(int(val)) or satisfies_condition(left_end): 
        count += 1
    return count 

if __name__ == '__main__': 
  
    # Input L and R ( as a string ) 
    l, r = '123', '984'
  
    right = count_upto(r) 
  
    left = 0
    if(l == '1'): 
        left = 0
    else: 
        left = count_upto(str(int(l)-1)) 
  
    print(right - left) 