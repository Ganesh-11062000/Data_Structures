class Graph:
    def __init__(self,v):
        self.V = v
        self.adj = [[] for i in range(self.V)]
    
    def addEdge(self,v,w):
        self.adj[v].append(w)
        self.adj[w].append(v)
    
    def DFS_recursive(self,n,visited,temp):
        visited[n] = True
        temp.append(n)

        for i in self.adj[n]:
            if visited[i] == False:
                temp = self.DFS_recursive(i,visited,temp)
        return temp

    def DFS_iterative(self,n,visited,temp):
        stack = []
        stack.append(n)

        while(len(stack)):
            s = stack[-1]
            stack.pop()

            if (not visited[s]):
                temp.append(s)
                visited[s] = True

            for node in self.adj[s]:
                if (not visited[node]):
                    stack.append(node)
        return temp

g = Graph(5)
g.addEdge(1, 0)
g.addEdge(0, 2) 
g.addEdge(2, 1)  
g.addEdge(0, 3) 
g.addEdge(1, 4)

temp = []
visited = [False for i in range(0, 5)]
temp = g.DFS_iterative(0,visited,temp)
print('DFS iterative')
print(temp)

visited = [False for i in range(0, 5)]
temp = g.DFS_recursive(0,visited,temp)
print('DFS recursive')
print(temp)  
