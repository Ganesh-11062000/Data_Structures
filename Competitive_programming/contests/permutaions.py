def printarr(a,n):
	for i in range(0,n):
		print(a[i], end = ' ')
	print()

def permute(arr, size, n):
	if size == 1:
		printarr(a,n)
		return

	for i in range(size):
		permute(arr,size - 1, n)

		if size & 1:
			arr[0], arr[size-1] = arr[size -1], arr[0]
		else:
			arr[i], arr[size - 1] = arr[size - 1], arr[i]


a = [1, 2, 3, 4] 
n = len(a) 
permute(a, n, n) 
