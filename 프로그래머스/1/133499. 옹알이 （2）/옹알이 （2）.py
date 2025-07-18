def solution(babbling):
    count = 0
    can = ["aya", "ye", "woo", "ma"]
    for b in babbling:
        for c in can:
            if c * 2 in b:
                continue
            b = b.replace(c, ' ')
        if b.isspace():
            count += 1
    return count