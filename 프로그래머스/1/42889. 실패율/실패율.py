def solution(N, stages):
    clears = [0] * (N + 2)
    fail_rates = {}
    now_player = len(stages)
    for i in stages:
        clears[i] += 1
    for i in range(1, N + 1):
        if clears[i] == 0:
            fail_rates[i] = 0
        else:
            fail_rates[i] = (clears[i] / now_player)
            now_player -= clears[i]
    fail_rates = sorted(fail_rates.items(), key = lambda x : (-x[1], x[0]))
    return [key[0] for key in fail_rates]