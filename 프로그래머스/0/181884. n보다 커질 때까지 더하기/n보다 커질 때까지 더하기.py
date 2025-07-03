def solution(numbers, n):
    sum = 0
    for i in numbers:
        if sum > n:
            break
        sum = sum + i
    return sum