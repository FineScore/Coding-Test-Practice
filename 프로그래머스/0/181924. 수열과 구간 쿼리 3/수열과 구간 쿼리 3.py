def solution(arr, queries):
    for idx in queries:
        t = arr[idx[0]]
        arr[idx[0]] = arr[idx[1]]
        arr[idx[1]] = t
    return arr