#	>>> n = 3
#	>>> bin(2**3)
#	'0b1000'

#   Time Complexity : O(N . 2^N)
#	wSpace Complexity : O(N . 2^N)

def subsets(L):
	S = []			#list of subsets
	n = len(L)
	
	for i in range(2**n,2**(n+1)):
		bitmask = bin(i)[3:]
		print(bitmask)
		#S.append([L[j] for j in range(n) if bitmask[j] == '1'])
	
	return S
	
	
if __name__ == '__main__':
	
	L = [1,2,3]
	S = subsets(L)
	
	#for x in S:
	#	print(x)

