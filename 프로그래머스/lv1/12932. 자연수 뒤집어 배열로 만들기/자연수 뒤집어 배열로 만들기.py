def solution(n):
    answer = list(str(n))
    answer.reverse()
    answer = [int(x) for x in answer]
    return answer