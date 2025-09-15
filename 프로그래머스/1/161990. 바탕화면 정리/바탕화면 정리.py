def solution(wallpaper):
    start = False
    lux, luy, rdx, rdy = 0, 0, 0, 0
    for i in range(len(wallpaper)):
        for j in range(len(wallpaper[i])):
            if wallpaper[i][j] == "#":
                if not start:
                    lux, luy, rux, ruy = i, j, i + 1, j + 1
                    start = True
                else:
                    lux, luy, rux, ruy = min(i, lux), min(j, luy), max(i + 1, rux), max(j + 1, ruy)
    return [lux, luy, rux, ruy]