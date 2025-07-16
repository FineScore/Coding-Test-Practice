def solution(friends, gifts):
    # 선물 기록 O : 이번 달까지 더 많은 선물을 준 사람 -> 다음달에 선물 하나 +
    # 선물 기록 X or 수가 같다 : 선물지수 더 큰 사람 +
    t = [[0] * len(friends) for _ in range(len(friends))]
    for s in gifts:
        A, B = s.split(" ")
        t[friends.index(A)][friends.index(B)] += 1
    scores = [0] * len(friends)
    for i in range(len(t)):
        for j in range(len(t[i])):
            scores[i] += t[i][j]
            scores[j] -= t[i][j]
    next_mon = [0] * len(friends)
    for i in range(len(t)):
        for j in range(len(t[i])):
            if i == j:
                continue
            if (t[i][j] == 0 and t[j][i] == 0) or t[i][j] == t[j][i]:
                if scores[i] > scores[j]:
                    next_mon[i] += 1
                elif scores[i] < scores[j]:
                    next_mon[j] += 1
            else:
                if t[i][j] > t[j][i]:
                    next_mon[i] += 1
                elif t[i][j] < t[j][i]:
                    next_mon[j] += 1
    answer = max(next_mon)
    return answer / 2