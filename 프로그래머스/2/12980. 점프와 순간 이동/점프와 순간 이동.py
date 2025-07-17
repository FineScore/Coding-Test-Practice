def solution(n):
    # K 칸 앞으로 점프, 현재 거리 x 2 순간이동
    # 순간이동 건전지 X, 점프하면 K 만큼 사용
    ans = 0
    while not n == 0:
        if not n % 2 == 0:
            n -= 1
            ans += 1
        else:
            n /= 2

    return ans