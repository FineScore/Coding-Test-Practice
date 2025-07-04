def solution(myString, pat):
    t = myString.maketrans("AB", "BA")
    new = myString.translate(t)
    if new.find(pat) == -1:
        return 0
    else:
        return 1