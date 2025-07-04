def solution(n):
    if not n % 2 == 0:
        return sum(range(1, n + 1, 2))
    else:
        s = 0
        for i in range(2, n + 1, 2):
            s = s + (i ** 2)
        return s