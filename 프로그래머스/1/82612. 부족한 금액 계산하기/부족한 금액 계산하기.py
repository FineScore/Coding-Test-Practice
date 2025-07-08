def solution(price, money, count):
    now_p = 0
    for i in range(1, count + 1):
        now_p += price * i
    if now_p >= money:
        return now_p - money
    else:
        return 0