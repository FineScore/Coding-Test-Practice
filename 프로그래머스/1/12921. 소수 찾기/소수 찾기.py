def solution(n):
    t = set(range(2, n + 1))
    
    for i in range(2, int(n ** (1/2) + 1)):
        if i in t:
            t -= set(range(i + i, n + 1, i))
    return len(t)