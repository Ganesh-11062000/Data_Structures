tree = []
a = []
MAX_val = 1000000000000000
def build(node, start, end):
    if start == end:
        tree[node] = a[start]
    
    else:
        mid = (start + end) // 2
        build(node * 2 + 1, start, mid)
        build(node * 2 + 2, mid + 1, end)
        tree[node] = min(tree[node * 2 + 1],tree[node * 2 + 2])


def update(node, start, end, index, val):
    if start == end:
        a[index] = val
        tree[node] = val
    else:
        mid = (start + end) // 2
        if start <= index and index <= mid:
            update(node * 2 + 1, start, mid, index, val)
        else:
            update(node * 2 + 2, mid + 1, end, index, val)
        
        tree[node] = min(tree[node * 2 + 1], tree [node * 2 + 2])

def query(node, start, end, l, r):
    if r < start or end < l:
        return MAX_val
    if l <= start and end <= r:
        return tree[node]
    
    mid = (start + end ) // 2
    p1 = query(node * 2 + 1, start, mid, l,r)
    p2 = query(node * 2 + 2, mid + 1, end, l, r)
    return min(p1,p2)

n, q = map(int,input().split())
tree = [MAX_val for i in range(2 * n + 1)]
a = list(map(int, input().split()))
start = 0
end = len(a) - 1
build(0,0,len(a) - 1)

while q > 0:
    q -= 1
    t,l,r  = map(str,input().split())
    l = int(l) - 1
    r = int(r) - 1

    if t == 'q':
        print(query(0,start,end,l,r))
    else:
        update(0,start,end,l,r)

