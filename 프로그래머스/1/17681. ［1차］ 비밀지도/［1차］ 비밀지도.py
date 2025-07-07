def solution(n, arr1, arr2):
    l = []
    inlist = []
    for i in arr1:
        for _ in range(0, n):
            inlist.append(int(i % 2))
            i /= 2
        inlist.reverse()
        l.append(inlist)
        inlist = []
    for i in arr2:
        for _ in range(0, n):
            inlist.append(int(i % 2))
            i /= 2
        inlist.reverse()
        l.append(inlist)
        inlist = []
    answer = []
    s = ''
    for idx in range(0, n):
        for j in range(0, n):
            if l[idx][j] or l[idx + n][j]:
                s += '#'
            else:
                s += ' '
        answer.append(s)
        s = ''
    
    return answer
