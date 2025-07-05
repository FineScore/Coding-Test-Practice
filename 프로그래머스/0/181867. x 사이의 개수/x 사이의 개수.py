def solution(myString):
    l = myString.split("x")
    answer = [len(x) for x in l]
    return answer