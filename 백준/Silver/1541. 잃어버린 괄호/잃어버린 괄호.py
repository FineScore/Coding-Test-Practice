expr = input().split('-')
number = 0

for i in expr[0].split('+'):
    number += int(i)

for left in expr[1:]:
    for j in left.split('+'):
        number -= int(j)

print(number)
