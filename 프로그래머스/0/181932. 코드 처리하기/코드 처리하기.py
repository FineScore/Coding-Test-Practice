def solution(code):
    mode = 0
    ret = []
    for i in range(len(code)):
        if not mode:
            if code[i] == "1":
                mode = 1
            else:
                if i % 2 == 0:
                    ret.append(code[i])
        else:
            if code[i] == "1":
                mode = 0
            else:
                if not i % 2 == 0:
                    ret.append(code[i])
    ret = ''.join(ret)
                    
    return "EMPTY" if ret == '' else ret