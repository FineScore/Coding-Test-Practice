import sys
from collections import deque

input = sys.stdin.readline

n = int(input().rstrip())
bals = deque(map(int, input().rstrip().split()))
indexs = deque(i for i in range(1, n + 1))
results = []

next = bals.popleft()
count = next
results.append(str(indexs.popleft()))

while len(bals) > 0:
    if next > 0:
        count -= 1
    else:
        count += 1
    if next > 0:
        while count > 0:
            v = bals.popleft()
            i = indexs.popleft()
            bals.append(v)
            indexs.append(i)
            count -= 1
        next = bals.popleft()
        count = next
        results.append(str(indexs.popleft()))
    else:
        while count < 0:
            v = bals.pop()
            i = indexs.pop()
            bals.appendleft(v)
            indexs.appendleft(i)
            count += 1
        next = bals.pop()
        count = next
        results.append(str(indexs.pop()))

print(' '.join(results))
