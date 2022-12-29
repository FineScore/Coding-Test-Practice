t = int(input())
for _ in range(t):
    n = int(input())
    l = sorted(list(map(int, input().split())))
    print(l[0], end=' ')
    print(l[len(l) - 1], end='\n')
