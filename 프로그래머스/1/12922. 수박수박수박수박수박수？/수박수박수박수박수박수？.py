def solution(n):
    answer = ''
    for i in range(0, n):
        if not i % 2 == 0:
            answer += '박'
        else:
            answer += '수'
    return answer