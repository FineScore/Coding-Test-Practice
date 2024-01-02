n, m = map(int, input().split())
graph = [[] for _ in range(n)]
visited = [False] * n
check = False

for _ in range(m):
    first, second = map(int, input().split())
    graph[first].append(second)
    graph[second].append(first)


def dfs(graph, start, depth=0):
    global check
    visited[start] = True
    if depth == 4:
        check = True
        return

    for x in graph[start]:
        if not visited[x]:
            visited[x] = True
            dfs(graph, x, depth + 1)
            visited[x] = False


for x in range(n):
    dfs(graph, x)
    visited[x] = False
    if check == True:
        break

if check == False:
    print(0)
else:
    print(1)
