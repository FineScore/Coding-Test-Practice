def solution(a, d, included):
    l = [a]
    for i in range(1, len(included)):
        l.append(l[i - 1] + d)
    s = 0
    for i in range(len(included)):
        if included[i]:
            s = s + l[i]
    return s