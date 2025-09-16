def solution(s):
    answer = []
    first_idx = {}
    last_idx = {}
    for i in range(len(s)):
        if s[i] not in last_idx:
            last_idx[s[i]] = -1
            answer.append(-1)
        else:
            last_idx[s[i]] = i - first_idx[s[i]] 
            answer.append(i - first_idx[s[i]] )
        first_idx[s[i]] = i
    return answer