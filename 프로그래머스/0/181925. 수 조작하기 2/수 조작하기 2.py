def solution(numLog):
    answer = ''
    c = ["w", "s", "d", "a"]
    for i in range(1, len(numLog)):
        if numLog[i] - numLog[i - 1] == 1:
            answer = answer + c[0]
        elif numLog[i] - numLog[i - 1] == -1:
            answer = answer + c[1]
        elif numLog[i] - numLog[i - 1] == 10:
            answer = answer + c[2]
        else:
            answer = answer + c[3]
    return answer