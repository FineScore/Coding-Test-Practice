def solution(numbers):
    s = 0
    for i in range(0, 10):
        if not i in numbers:
            s += i
    return s