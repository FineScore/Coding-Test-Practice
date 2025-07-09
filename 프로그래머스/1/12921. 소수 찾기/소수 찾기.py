def solution(n):
    count = 0
    for i in range(1, n + 1):
        if i < 2:
            continue
        isSosu = True
        for j in range(2, int(i ** (1/2) + 1)):
            if i % j == 0:
                isSosu = False
                break
        if isSosu:
            count += 1
    return count