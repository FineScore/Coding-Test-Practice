n = int(input())
sec = 0
length = 1
cnt = 0
xy = [0, 0]
yclear = False 
while(sec < n):
    if(length % 2 == 0):
        if length >= cnt:
            if yclear:
                xy[0] = xy[0] - 1
                cnt = cnt + 1
                if cnt == length:
                    yclear = False
                    length = length + 1
                    cnt = 0
            else:
                xy[1] = xy[1] - 1
                cnt = cnt + 1
                if cnt == length:
                    yclear = True
                    cnt = 0
    else:
        if length >= cnt:
            if yclear:
                xy[0] = xy[0] + 1
                cnt = cnt + 1
                if cnt == length:
                    yclear = False
                    length = length + 1
                    cnt = 0
            else:
                xy[1] = xy[1] + 1
                cnt = cnt + 1
                if cnt == length:
                    yclear = True
                    cnt = 0
                    
    sec = sec + 1
    

print(f'{xy[0]} {xy[1]}')
