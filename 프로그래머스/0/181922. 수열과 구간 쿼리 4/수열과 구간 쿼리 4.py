def solution(arr, queries):
    for q in queries:
        s, e, k = map(int, q)
        for num in range(s, e + 1):
            if num % k == 0:
                arr[num] += 1
    return arr
                