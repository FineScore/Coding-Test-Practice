n = int(input())
s = []
result = 0
for _ in range(n):
    s.append(list(map(int, input().split())))

for l in s:
    result = result + l[0] * l[1]

print(result)
