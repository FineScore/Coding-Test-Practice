def solution(num_list):
    o_sum = 0
    e_sum = 0
    for i in range(0, len(num_list), 2):
        o_sum += num_list[i]
    for i in range(1, len(num_list), 2):
        e_sum += num_list[i]
    if o_sum > e_sum:
        return o_sum
    else:
        return e_sum