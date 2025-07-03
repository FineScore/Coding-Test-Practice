def solution(my_string, is_prefix):
    answer = []
    result = 0
    for s in my_string:
        answer.append(s)
        if ''.join(answer) == is_prefix:
            result = 1
    return result