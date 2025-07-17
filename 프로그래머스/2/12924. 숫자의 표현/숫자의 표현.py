def solution(n):
    count = 0
    start = 0
    while not start == n:
        start += 1
        now = start
        for i in range(start + 1, n + 1):
            if now >= n:
                break
            now += i
        if now == n:
            count += 1
    return count
    