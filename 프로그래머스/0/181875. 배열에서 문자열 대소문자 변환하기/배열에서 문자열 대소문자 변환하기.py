def solution(strArr):
    for i in range(len(strArr)):
        if not i % 2 == 0:
            strArr[i] = strArr[i].upper()
        else:
            strArr[i] = strArr[i].lower()
    return strArr