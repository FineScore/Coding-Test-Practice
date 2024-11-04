n = int(input())
arr = []
for i in range(n):
    s = input()
    in_arr = []
    for j in range(n):
        in_arr.append(s[j])
    arr.append(in_arr)
mind = int(input())


if mind == 2:
    for i in range(n):
        row = arr[i]
        for j in range(n):
            if j > int(n / 2) - 1:
                break
            tmp = row[j]
            row[j] = row[(n - 1) - j]
            row[(n - 1) - j] = tmp
        arr[i] = row
elif mind == 3:
    for i in range(n):
        if i > int(n / 2) - 1:
            break
        tmp = arr[i]     
        arr[i] = arr[(n - 1) - i]
        arr[(n - 1) - i] = tmp

for i in range(n):
    print(''.join(arr[i]))

