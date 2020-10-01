class Tree:
    def __init__(self,x):
        self.left = None
        self.right = None
        self.val = x
    

def dfs(root):
    # returns a tuple(diameter, depth)
    if root == None:
        return (0,0)
    
    d_left = dfs(root.left)
    d_right = dfs(root.right)

    diam = max(d_left[0],d_right[0], d_left[1]+d_right[1])
    
    return (diam, max(d_left[1],d_right[1]) + 1)

if __name__ == "__main__":
    t = Tree(4)
    t.left = Tree(3)
    t.right = Tree(6)
    t.left.left = Tree(1)
    t.right.right = Tree(2)
    ans = dfs(t)
    print(ans[0])