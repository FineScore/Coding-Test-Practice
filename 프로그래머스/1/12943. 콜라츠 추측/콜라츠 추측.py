def solution(num):
    c = 0
    while not num == 1:
        if c == 500:
            c = -1
            break
        if num % 2 == 0:
            num /= 2
        else:
            num = num * 3 + 1
        c += 1
    
    return c
        