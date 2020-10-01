import heapq

def addNumber(number,lowers,highers):
    if len(lowers) == 0 or number < lowers[0]*-1:
        heapq.heappush(lowers,-1*number)
    else:
        heapq.heappush(highers,number)
    return lowers,highers

def rebalance(lowers,highers):
    if len(lowers) > len(highers): 
        if len(lowers) - len(highers) >= 2:
            heapq.heappush(highers,heapq.heappop(lowers)*-1)
    else: 
        if len(highers) - len(lowers) >= 2:
            heapq.heappush(lowers,heapq.heappop(highers)*-1)
    return lowers,highers
    
def getMedian(lowers,highers):
    if len(lowers) == len(highers):
        return (lowers[0]*-1 + highers[0]) / 2
    else:
        if len(lowers) > len(highers):
            return lowers[0]*-1
        else:
            return highers[0]

def getMedians(arr):
    lowers = heapq.heapify([]) or []
    highers = heapq.heapify([]) or []

    medians = []

    n = len(arr)

    for i in range(0,n):
        number = arr[i]
        lowers,highers = addNumber(number,lowers,highers)
        lowers,highers = rebalance(lowers,highers)
        medians.append(getMedian(lowers,highers))
    return medians
# driver code
a = [5, 15, 1, 3, 2, 8, 7, 9, 10, 6, 11, 4]

ans = getMedians(a)

for i in ans:
    print(i,end = " ")