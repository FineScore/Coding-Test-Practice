import sys

n, m = map(int, sys.stdin.readline().rstrip().split())
l = list(map(int, sys.stdin.readline().rstrip().split()))
s = [0]
a = 0
for i in l:
    a += i
    s.append(a)

for _ in range(m):
    start, end = map(int, sys.stdin.readline().rstrip().split())
    print(s[end] - s[start - 1])
