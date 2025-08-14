import sys

m, n = map(int, sys.stdin.readline().rstrip().split(" "))
l = []

for _ in range(m):
    l.append(str(sys.stdin.readline().rstrip()))

for _ in range(n):
    q = str(sys.stdin.readline().rstrip())
    if q.isdigit():
        num = int(q)
        print(l[num - 1])
    else:
        print(l.index(q) + 1)
