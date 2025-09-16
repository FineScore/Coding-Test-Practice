def solution(n):
    three = []
    while n != 0:
        three.append(str(n % 3))
        n = int(n / 3)
    three = ''.join(three)
    answer = 0
    b = 1
    for i in range(len(three) - 1, -1, -1):
        answer += int(three[i]) * b
        b *= 3
    return answer

