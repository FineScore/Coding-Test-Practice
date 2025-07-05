def solution(n):
    answer = []
    for i in range(n):
        sd = [0] * n
        sd[i] = 1
        answer.append(sd)
    return answer