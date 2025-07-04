def solution(str_list, ex):
    for i in range(len(str_list)):
        if ex in str_list[i]:
            str_list[i] = ""
            
    return ''.join(str_list)