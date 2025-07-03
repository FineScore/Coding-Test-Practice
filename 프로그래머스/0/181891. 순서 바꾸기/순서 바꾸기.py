def solution(num_list, n):
    for i in range(n, len(num_list)):
        a = num_list.pop()
        num_list.insert(0, a)
    return num_list