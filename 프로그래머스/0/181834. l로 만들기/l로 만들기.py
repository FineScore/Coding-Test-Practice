def solution(myString):
    for c in myString:
        if c < 'l':
           myString = myString.replace(c, 'l') 
    return myString