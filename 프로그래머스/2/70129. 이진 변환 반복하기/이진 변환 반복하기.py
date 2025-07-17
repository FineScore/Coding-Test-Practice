def solution(s):
    answer = [0] * 2
    while not s == "1":
        answer[0] += 1
        answer[1] += s.count("0")
        s = s.replace("0", "")
        s = str(bin(len(s)))[2:]
    return answer