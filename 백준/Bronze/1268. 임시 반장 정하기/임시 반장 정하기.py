count = int(input())
school = [input().split() for i in range(count)]
meet = [[False for x in range(count)] for y in range(count)]

for i in range(count):
    for j in range(count):
        if i == j:
            meet[i][j] = True

num = [0 for x in range(count)]

for classroom in range(5):
    for student in range(count):
        for check in range(count):
            if student == check:
                continue
            if school[student][classroom] == school[check][classroom]:
                if meet[student][check] == False:
                    meet[student][check] = True
                    num[student] += 1

maxMeet = max(num)
print(num.index(maxMeet) + 1)
