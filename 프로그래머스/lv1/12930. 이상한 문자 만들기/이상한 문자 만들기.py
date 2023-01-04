def solution(s):
    isVoca = True
    idx = 0
    a = ''
    
    for x in s:
        if not x == ' ' and isVoca == False:
            isVoca = True
            idx = 0
        if not x == ' ' and isVoca == True:
            if idx % 2 == 0:
                a += x.upper()
            else:
                a += x.lower()
            idx += 1
        if x == ' ' and isVoca == True:
            isVoca = False
        if x == ' ' and isVoca == False:
            a += x
        
    return a