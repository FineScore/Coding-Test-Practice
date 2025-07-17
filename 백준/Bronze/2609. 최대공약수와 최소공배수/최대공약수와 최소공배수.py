import math

a, b = map(int, input().split())
max = math.gcd(a, b)
min = a * b / max
print(max)
print(int(min))
