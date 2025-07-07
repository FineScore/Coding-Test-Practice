def solution(n):
    x = 1
    answer = 0
    while True:
        if n % x == 1:
            answer = x
            break
        x += 1
    return answer