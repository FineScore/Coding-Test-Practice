import sys

input = sys.stdin.readline

T = int(input().rstrip())

for _ in range(T):
    L, R, S = map(int, input().rstrip().split())
    if (L + R) / 2 > S:
        S = (S - L) * 2 + 1
    else:
        S = (R - S) * 2
    print(S)
