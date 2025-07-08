def solution(n, m):
    big = max(n, m)
    small = min(n, m)
    while small > 0:
        big, small = small, big % small
    return [big, (n * m) / big]
        