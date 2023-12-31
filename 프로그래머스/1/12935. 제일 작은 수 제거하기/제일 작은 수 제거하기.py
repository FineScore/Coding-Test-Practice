def solution(arr):
    copy = arr.copy()
    copy.sort()
    m = copy[0]
    if len(arr) == 1:
        return [-1]
    answer = [x for x in arr if x != m]
    return answer