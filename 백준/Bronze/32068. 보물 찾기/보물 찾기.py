import sys

input = sys.stdin.readline

T = int(input().rstrip())

for _ in range(T):
    L, R, S = map(int, input().rstrip().split())
    count = 1
    while L != S and R != S:
        if count % 2 != 0:
            S += count
        else:
            S -= count
        count += 1
    print(count)