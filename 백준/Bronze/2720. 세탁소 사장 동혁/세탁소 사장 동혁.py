coin = [25, 10, 5, 1]
answers = []

t = int(input())
for i in range(t):
    case = int(input())
    for j in range(4):
        answers.append(str(int(case / coin[j])))
        case %= coin[j]
    print(" ".join(answers))
    answers = []
