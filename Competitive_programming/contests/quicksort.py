def partition(arr, low, high):
    i = low - 1
    pivot = arr[high]
    for j in range(low, high):
        if(arr[j]) <= pivot:
            i += 1
            arr[i],arr[j] = arr[j],arr[i]
    
    arr[high],arr[i+1] = arr[i+1],arr[high]
    return i + 1

def quicksort(arr, low, high):
    if low < high:
        p = partition(arr, low, high)
        quicksort(arr, 0, p - 1)
        quicksort(arr, p + 1, high)

if __name__ == "__main__":
    arr = list(map(int, input().split()))
    n = len(arr)
    quicksort(arr,0, n - 1)
    print(arr)