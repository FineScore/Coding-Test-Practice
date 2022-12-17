test_case = int(input())

for _ in range(test_case):
    clothes = {}
    count = 1
    for _ in range(int(input())):
        name, type = map(str, input().split())
        if type in clothes:
            clothes[type].append(name)
        else:
            clothes[type] = [name]
    for key in clothes:
        count *= len(clothes[key]) + 1
    print(count - 1)
