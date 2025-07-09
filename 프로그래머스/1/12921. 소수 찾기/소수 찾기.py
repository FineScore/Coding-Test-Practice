def isSosu(n):
    if n < 2:
        return False
    for i in range(2, int(n ** (1/2) + 1)):
        if n % i == 0:
            return False
    return True

def solution(n):
    count = 0
    for i in range(1, n + 1):
        if isSosu(i):
            count += 1
        
    return count