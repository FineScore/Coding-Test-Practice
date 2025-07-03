def solution(a, b):
    f = int(f'{a}{b}')
    l = int(f'{b}{a}')
    if f > l:
        answer = f
    elif f < l:
        answer = l
    else:
        answer = f
    return int(answer)