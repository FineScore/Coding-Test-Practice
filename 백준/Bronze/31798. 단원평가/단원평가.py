import math

a, b, c = map(int, input().split())
result = 0

if a == 0:
    result = (c * c) - b
elif b == 0:
    result = (c * c) - a
else:
    result = int(math.sqrt(a + b))

print(result)