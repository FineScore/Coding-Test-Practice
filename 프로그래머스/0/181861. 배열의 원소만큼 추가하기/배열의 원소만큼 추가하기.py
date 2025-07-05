def solution(arr):
    ans = []
    for i in arr:
        new = [i] * i
        ans += new
    return ans