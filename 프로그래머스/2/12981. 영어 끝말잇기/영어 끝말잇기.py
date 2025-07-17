import math

def solution(n, words):
    answer = [0, 0]
    for i in range(1, len(words)):
        if not words[i-1][-1] == words[i][0] or words[:i].count(words[i]) > 0:
            answer = [n if (i + 1) % n == 0 else (i + 1) % n, math.ceil((i + 1) / n)]
            break
    return answer