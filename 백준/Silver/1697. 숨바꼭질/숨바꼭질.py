from collections import deque

n, k = map(int, input().split())
visited = [0] * 100001


def search(start, end, visited):
    q = deque([start])
    while q:
        v = q.popleft()
        if v == end:
            return visited[v]
        for i in (v-1, v+1, v*2):
            if 0 <= i <= 100000 and not visited[i]:
                visited[i] = visited[v] + 1
                q.append(i)


print(search(n, k, visited))
