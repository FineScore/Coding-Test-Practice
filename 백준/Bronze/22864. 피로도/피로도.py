import sys

input = sys.stdin.readline

A, B, C, M = map(int, input().rstrip().split())

time = 0
piro = 0
work = 0

while piro <= M and time < 24:
    if A > M:
        break
    time += 1
    piro += A
    work += B
    while piro > M - A and time < 24:
        time += 1
        piro -= C
        if piro < 0:
            piro = 0

print(work)
