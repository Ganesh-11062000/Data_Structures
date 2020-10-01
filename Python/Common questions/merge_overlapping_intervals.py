def merge(arr):
    if len(arr) <= 0:
        return

    stack = []
    arr.sort(key=lambda x:x[0])
    stack.append(arr[0])
    n = len(arr)

    for i in range(1,n):
        top = stack[0]

        if top[1] < arr[i][0]:
            stack.append(arr[i])

        elif top[1] < arr[i][1]:
            top[1] = arr[i][1]
            stack.pop(-1)
            stack.append(top)


    while len(stack) > 0:
        t = stack.pop(-1)
        print("[",str(t[0]),",",str(t[1]),"] ")



if __name__ == '__main__':
    arr = [[6,8],[1,9],[2,4],[4,7]]
    merge(arr)
