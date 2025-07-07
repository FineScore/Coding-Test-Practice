T = int(input())

for _ in range(0, T):
    a, b = map(int, input().split())
    x = []
    for i in range(1, b + 1):
        last = int(str(a ** i)[-1])
        if len(x) == 0:
            x.append(last)
            continue
        if x[0] == last:
            break
        x.append(last)
    if len(x) == 0:
        print(int(str(a)[-1]))
    else:
        print(10) if x[(b % len(x)) - 1] == 0 else print(x[(b % len(x)) - 1])