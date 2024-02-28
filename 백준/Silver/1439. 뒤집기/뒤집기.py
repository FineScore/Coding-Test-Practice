s = input()
zero = 0
one = 0
before = None

for i in range(len(s)):
    if s[i] == '0':
        if before != '0':
            zero += 1
            before = s[i]
    else:
        if before != '1':
            one += 1
            before = s[i]
    if i == 0:
        before = s[i]

print(min(zero, one))