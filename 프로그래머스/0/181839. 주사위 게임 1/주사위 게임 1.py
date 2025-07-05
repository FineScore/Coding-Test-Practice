def solution(a, b):
    if not a % 2 == 0 and not b % 2 == 0:
        return a ** 2 + b ** 2
    elif not a % 2 == 0 or not b % 2 == 0:
        return 2 * (a + b)
    else:
        return abs(a - b)