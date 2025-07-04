def solution(arr, queries):
    ans = []
    m = -1
    for idx in queries:
        new = arr[idx[0]:idx[1] + 1]
        new.sort()
        for i in new:
            if i > idx[2]:
                ans.append(i)
                m = i
                break
        if m == -1:
            ans.append(-1)
        m = -1
    return ans