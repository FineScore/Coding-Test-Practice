def solution(a, b, c):
    if not (a == b or b == c or c == a):
        answer = a + b + c
    elif a == b == c:
        answer = (a + b + c) * (a ** 2 + b ** 2 + c ** 2) * (a ** 3 + b ** 3 + c ** 3)
    else:
        answer = (a + b + c) * (a ** 2 + b ** 2 + c ** 2)
    return answer