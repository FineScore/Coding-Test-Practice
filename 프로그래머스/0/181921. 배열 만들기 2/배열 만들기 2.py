def solution(l, r):
    answer = []
    f = True
    for i in range(l, r + 1):
        for s in str(i):
            if (not s == "0") and (not s == "5"): 
                f = False
                break
        if f == True:
            answer.append(i)
        f = True
    if len(answer) == 0:
        answer.append(-1)
    return answer