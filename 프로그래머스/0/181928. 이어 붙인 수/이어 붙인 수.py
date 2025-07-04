def solution(num_list):
    o = ''.join([str(i) for i in num_list if not i % 2 == 0])
    e = ''.join([str(i) for i in num_list if i % 2 == 0])
    return int(o) + int(e)