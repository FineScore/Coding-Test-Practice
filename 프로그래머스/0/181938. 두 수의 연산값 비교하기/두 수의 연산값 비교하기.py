def solution(a, b):
    s = int(str(a) + str(b))
    return max(s, 2 * a * b)