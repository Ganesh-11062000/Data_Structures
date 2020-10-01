# # MIN_ele = -10000000000000000000000000
# # a = [1,2,-3,-99,44]
# # def find_max(a):
# #     curr_max = MIN_ele
# #     second_max = a[0]
# #     for i in a:
# #         if i > curr_max:
# #             second_max = curr_max
# #             curr_max = i
# #     return second_max

# # print(find_max(a))

# string = 'aaszbciouk'
# string = list(string)
# cnt = 0

# for i in range(0,len(string)):
#     if string[i] != 'a' and string[i] != 'e' and string[i] != 'o' and string[i] != 'u' and string[i] != 'i':
#         print(i)
#         cnt += 1
# print(cnt)

a = [1,2,3,1,-1,2,3,1,2,3]

d = {}
for ele in a:
    d[ele] = 0
for ele in a:
    d[ele] += 1

for ele, val in d.items():
    print(ele,val) 

# data structure made easy -- suggested by sahil rajput allincall

