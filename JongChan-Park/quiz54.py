# 1260 DFS와 BFS
# https://www.acmicpc.net/problem/1260

import sys

def dfs(start, visited, graph):
    visited.append(start)

    print(visited)

    for i in range(len(graph[start])):
        if graph[start][i] == 1 and (i not in visited):
            dfs(i, visited, graph)

    return visited

def bfs(start, graph):
    visited = [start]
    needVisit = [start]

    while needVisit:
        target = needVisit.pop(0)

        for i in range(len(graph[start])):
            if graph[target][i] == 1 and (i not in visited):
                print(graph[target][i], ' >>>> ', i)
                
                visited.append(i)
                needVisit.append(i)

    return visited

N, M, V = list(map(int, sys.stdin.readline().split()))
graph = [[0] * (N + 1) for _ in range(N + 1)]

for _ in range(M):
    V1, V2 = list(map(int, sys.stdin.readline().split()))

    graph[V1][V2] = 1
    graph[V2][V1] = 1
    
print(graph)
    
print(*dfs(V, [], graph))
print(*bfs(V, graph))
