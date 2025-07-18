import math

def solution(fees, records):
    l = {}
    n_l = set()
    answer = []
    for r in records:
        t, n, i = map(str, r.split(" "))
        n_l.add(n)
        if not n in l:
            l[n] = []
        l[n].append(t)
    n_l = sorted(n_l)
    l2 = {}
    for k, v in l.items():
        if not len(v) % 2 == 0:
            v.append('23:59')
        l2[k] = 0
        for i in range(0, len(v), 2):
            bh, bm = map(int, v[i].split(":"))
            ah, am = map(int, v[i+1].split(":"))
            l2[k] += ((ah * 60) + am) - ((bh * 60) + bm)
    for n in n_l:
        if fees[0] <= l2[n]:
            answer.append(fees[1] + math.ceil((l2[n] - fees[0]) / fees[2]) * fees[3])
        else:
            answer.append(fees[1])
    return answer