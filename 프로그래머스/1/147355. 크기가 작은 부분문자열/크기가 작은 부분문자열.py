def solution(t, p):
    count = 0
    for i in range(0, len(t) - len(p) + 1):
        if int(t[i:len(p) + i]) <= int(p):
            count += 1
    return count