import sys

input = sys.stdin.readline

N, K, P = map(int, input().rstrip().split())
breads = list(map(int, input().rstrip().split()))
count = 0

for i in range(0, len(breads), K):
    if P > K - sum(breads[i:i+K]):
        count += 1

print(count)