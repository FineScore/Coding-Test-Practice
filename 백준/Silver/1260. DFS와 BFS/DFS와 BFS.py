from collections import deque

n, m, v = map(int, input().split())
dfs_visited = [False] * (n + 1)
bfs_visited = [False] * (n + 1)

graph = [[] for _ in range(n + 1)]
for _ in range(m):
    i, j = map(int, input().split())
    graph[i].append(j)
    graph[j].append(i)
for i in range(len(graph)):
    if graph[i]:
        graph[i] = sorted(graph[i])


def dfs(graph, v, visited):
    visited[v] = True
    print(v, end=' ')
    for i in graph[v]:
        if not visited[i]:
            dfs(graph, i, visited)


def bfs(graph, start, visited):
    queue = deque([start])
    visited[start] = True
    while queue:
        v = queue.popleft()
        print(v, end=' ')
        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True


dfs(graph, v, dfs_visited)
print()
bfs(graph, v, bfs_visited)
