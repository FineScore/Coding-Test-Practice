a, b, c = map(int, input().split(" "))
d = int(input())

h, m, s = 0, 0, 0

m = int(d / 60)
s = d % 60

if m >= 60:
    h = int(m / 60)
    m = m % 60

a += h
b += m
c += s

if c >= 60:
    b += int(c / 60)
    c %= 60

if b >= 60:
    a += int(b / 60)
    b %= 60

if a >= 24:
    a %= 24

print(f"{a} {b} {c}")
