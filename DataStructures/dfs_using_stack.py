

def dfs(graph , start , visited = None):
    if visited is None:
        visited.set()
    visited.add(start)

    print(start)


    for next in graph[start] - visited :
        dfs (graph , next , visited )

    return visited

graph = { '0' :set(['1','2']),
}
         
dfs(graph , '0')