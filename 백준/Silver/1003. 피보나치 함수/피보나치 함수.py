import sys

t = int(sys.stdin.readline().rstrip())
n = []


for _ in range(t):
    n.append(int(sys.stdin.readline().rstrip()))

n_sorted = sorted(n)
zero = [0] * 100
one = [0] * 100
zero[0] = 1
one[1] = 1

if n_sorted[len(n_sorted) - 1] > 2:
    for i in range(2, n_sorted[len(n_sorted) - 1] + 1):
        zero[i] = zero[i - 2] + zero[i - 1]
        one[i] = one[i - 2] + one[i - 1]

for i in n:
    print(zero[i], end=' ')
    print(one[i], end='\n')