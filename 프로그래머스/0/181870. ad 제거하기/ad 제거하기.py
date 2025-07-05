def solution(strArr):
    ans = []
    for s in strArr:
        if not "ad" in s:
            ans.append(s)
    return ans