from collections import deque
import sys

n = int(input())
q = deque()
for _ in range(n):
    s = sys.stdin.readline().rstrip()
    if 'push' in s:
        com, count = s.split(' ')
        q.append(count)
    elif s == 'front':
        if len(q) == 0:
            print(-1)
        else:
            print(q[0])
    elif s == 'back':
        if len(q) == 0:
            print(-1)
        else:
            print(q[-1])
    elif s == 'pop':
        if len(q) == 0:
            print(-1)
        else:
            print(q.popleft())
    elif s == 'size':
        print(len(q))
    elif s == 'empty':
        if len(q) == 0:
            print(1)
        else:
            print(0)