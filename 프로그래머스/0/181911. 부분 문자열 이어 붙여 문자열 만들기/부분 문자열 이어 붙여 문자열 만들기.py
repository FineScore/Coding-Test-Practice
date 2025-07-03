def solution(my_strings, parts):
    answer = ''
    for i in range(len(my_strings)):
        s = my_strings[i]
        p = s[parts[i][0]:parts[i][1]+1]
        answer = answer + p
    
    return answer