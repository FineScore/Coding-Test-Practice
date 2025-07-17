import math

N, K = map(int, input().split(" "))
womans = [0] * 6
mans = [0] * 6
for p in range(N):
    S, Y = map(int, input().split(" "))
    if S == 0:
        womans[Y - 1] += 1
    else:
        mans[Y - 1] += 1
room = 0
for i in range(6):
    room += math.ceil(womans[i] / K)
    room += math.ceil(mans[i] / K)
print(room) 