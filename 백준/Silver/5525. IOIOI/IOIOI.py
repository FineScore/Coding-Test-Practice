import sys

n = int(sys.stdin.readline().rstrip())
m = int(sys.stdin.readline().rstrip())
s = sys.stdin.readline().rstrip()
i, count, result = 0, 0, 0

while i < m - 1:
    if s[i:i + 3] == 'IOI':
        i += 2
        count += 1
        if count == n:
            result += 1
            count -= 1
    else:
        i += 1
        count = 0

print(result)
