s = input()
stack = []
answer = ""
inTag = False

for x in range(len(s)):
    if s[x] == "<":
        if x > 0:
            while len(stack) != 0:
                answer += stack.pop()
        answer += s[x]
        inTag = True
    elif s[x] == ">":
        inTag = False
        answer += s[x]
    elif s[x] == " ":
        if inTag == False:
            while len(stack) != 0:
                answer += stack.pop()
        answer += s[x]
    elif x == len(s) - 1 and inTag == False:
        stack.append(s[x])
        while len(stack) != 0:
            answer += stack.pop()
    else:
        if inTag == True:
            answer += s[x]
        else:
            stack.append(s[x])

print(answer)
