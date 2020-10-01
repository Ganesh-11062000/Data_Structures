tree = []
a = []

def build(node, start, end):
    if start == end:
        tree[node] = a[start]
    
    else:
        mid = (start + end) // 2
        build(node * 2, start, mid)
        build(node * 2 + 1, mid + 1, end)
        tree[node] = tree[node * 2] + tree[node * 2 + 1]


def update(node, start, end, index, val):
    if start == end:
        a[index] += val
        tree[node] += val
    else:
        mid = (start + end) // 2
        if start <= index and index <= mid:
            update(node * 2, start, mid, index, val)
        else:
            update(node * 2 + 1, mid + 1, end, index, val)
        
        tree[node] = tree[node * 2] + tree [node * 2 + 1]

def query(node, start, end, l, r):
    if r < start or end < l:
        return 0
    if l <= start and end <= r:
        return tree[node]
    
    mid = (start + end ) // 2
    p1 = query(node * 2, start, mid, l,r)
    p2 = query(node * 2 + 1, mid + 1, end, l, r)
    return p1 + p2



if __name__ == "__main__":
    a = list(map(int,input().split()))
    tree = [0 for i in range( 2 * len(a) + 2)]
    build(1,0,len(a)-1)
    print(tree[1::])


