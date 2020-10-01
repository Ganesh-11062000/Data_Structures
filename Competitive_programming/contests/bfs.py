class Graph:
    def __init__(self,v):
        self.V = v
        self.adj = [[] for i in range(v)]
        self.temp = []
    
    def addEdge(self,v,w):
        self.adj[v].append(w)
        self.adj[w].append(v)
    
    def BFS_iterative(self,n,visited,temp):
        queue = []
        queue.append(n)
        visited[n] = True
        while len(queue):
            nd = queue.pop(0)
            temp.append(nd)
            for i in self.adj[nd]:
                if not visited[i]:
                    queue.append(i)
                    visited[i] = True
        return temp

    def BFS_recursive(self,n,visited,queue):
        if not(len(queue)):
            return
        
        nd = queue.pop(0)
        self.temp.append(nd)

        for node in self.adj[nd]:
            if not(visited[node]):
                visited[node] = True
                queue.append(node)
        self.BFS_recursive(n,visited,queue)
        
g = Graph(6)
g.addEdge(0, 1) 
g.addEdge(0, 2) 
g.addEdge(1, 2) 
g.addEdge(2, 0) 
g.addEdge(2, 3) 
g.addEdge(3, 3) 

queue = []
visited = [False for i in range(0, 5)]
temp = g.BFS_recursive(2,visited,queue)
print('BFS recursive' )
print(g.temp)

visited = [False for i in range(0, 6)]
temp = g.BFS_iterative(2,visited,temp)
print('BFS iterative')
print(temp)  
