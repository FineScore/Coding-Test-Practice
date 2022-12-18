import sys

count, need = map(int, sys.stdin.readline().rstrip().split())
numbers = tuple(map(int, sys.stdin.readline().rstrip().split()))
sums = [numbers[0]]

for i in range(1, count):
    sums.append(sums[i - 1] + numbers[i])
    
for _ in range(need):
    start, end = map(int, sys.stdin.readline().rstrip().split())
    if start == 1:
        print(sums[end - 1])
    else:
        print(sums[end - 1] - sums[start - 2])
