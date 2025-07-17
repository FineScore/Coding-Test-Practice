def solution(s):
    s = s.title()
    for i in range(len(s)):
        if s[i].isdigit() and not i == len(s) - 1:
            s = s.replace(s[i + 1], s[i + 1].lower(), 1)
    return s