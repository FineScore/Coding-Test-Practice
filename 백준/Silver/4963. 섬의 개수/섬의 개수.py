import sys

sys.setrecursionlimit(100000)


def dfs(land, x, y):
    ax = [1, -1, 0, 0, 1, 1, -1, -1]
    ay = [0, 0, 1, -1, 1, -1, 1, -1]
    land[x][y] = False
    for i in range(8):
        mx = x + ax[i]
        my = y + ay[i]
        if mx < 0 or mx >= h or my < 0 or my >= w:
            continue
        if land[mx][my]:
            dfs(land, mx, my)


while True:
    w, h = map(int, input().split())
    land = [[] for _ in range(h)]

    count = 0
    if w == 0 and h == 0:
        break
    for i in range(h):
        case = map(int, input().split())
        for j in case:
            if j == 0:
                land[i].append(False)
            else:
                land[i].append(True)
    for i in range(h):
        for j in range(w):
            if land[i][j]:
                dfs(land, i, j)
                count += 1

    print(count)
