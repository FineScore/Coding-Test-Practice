from collections import deque


def bfs(start, visited):
    if visited[start]:
        return False
    d.append(start)
    visited[start] = True
    while d:
        v = d.popleft()
        for i in g[v]:
            if not visited[i]:
                d.append(i)
                visited[i] = True
    return True


n, m = map(int, input().split())
g = []
visited = [False] * (n + 1)
visited[0] = True
d = deque()
c = 0

for _ in range(n + 1):
    g.append([])
    
for _ in range(m):
    o, t = map(int, input().split())
    g[o].append(t)
    g[t].append(o)

for i in range(1, n + 1):
    if bfs(i, visited):
        c += 1

print(c)
