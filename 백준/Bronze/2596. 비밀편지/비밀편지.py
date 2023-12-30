promise = [
    "000000",
    "001111",
    "010011",
    "011100",
    "100110",
    "101001",
    "110101",
    "111010",
]

count = int(input())
word = input()
answer = ""


def decode(num):
    if num == 0:
        return "A"
    elif num == 1:
        return "B"
    elif num == 2:
        return "C"
    elif num == 3:
        return "D"
    elif num == 4:
        return "E"
    elif num == 5:
        return "F"
    elif num == 6:
        return "G"
    else:
        return "H"


for i in range(count):
    flag = True
    for j in range(len(promise)):
        miss = 0
        for k in range(6):
            if promise[j][k] != word[i * 6 + k]:
                miss += 1
            if miss > 1:
                break
        if miss == 0 or miss == 1:
            answer += decode(j)
            break
        if j == len(promise) - 1:
            flag = False
            break
    if flag == False:
        answer = i + 1
        break

print(answer)
