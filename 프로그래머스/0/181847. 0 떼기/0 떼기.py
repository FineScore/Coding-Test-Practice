def solution(n_str):
    s = list(n_str)
    for i in range(len(s)):
        if s[i] == "0":
            s[i] = ""
        else:
            break
    return ''.join(s)