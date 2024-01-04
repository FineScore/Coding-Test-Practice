n = int(input())
board = [[] for _ in range(n)]
answer = 1


def scan(board):
    global answer
    for x in range(n):
        stack = []
        for y in range(n):
            if len(stack) == 0 or board[x][y] == stack[-1]:
                stack.append(board[x][y])
            if board[x][y] != stack[-1] or y == n - 1:
                count = 0
                size = len(stack)
                for _ in range(size):
                    stack.pop()
                    count += 1
                answer = max(count, answer)
                stack.append(board[x][y])

    for x in range(n):
        stack = []
        for y in range(n):
            if len(stack) == 0 or board[y][x] == stack[-1]:
                stack.append(board[y][x])
            if board[y][x] != stack[-1] or y == n - 1:
                count = 0
                size = len(stack)
                for _ in range(size):
                    stack.pop()
                    count += 1
                answer = max(count, answer)
                stack.append(board[y][x])


for i in range(n):
    row = input()
    for x in row:
        board[i].append(x)

for i in range(n):
    for j in range(n):
        if j + 1 < n and board[i][j] != board[i][j + 1]:
            board[i][j], board[i][j + 1] = board[i][j + 1], board[i][j]
            scan(board)
            board[i][j], board[i][j + 1] = board[i][j + 1], board[i][j]
for i in range(n):
    for j in range(n):
        if i + 1 < n and board[i][j] != board[i + 1][j]:
            board[i][j], board[i + 1][j] = board[i + 1][j], board[i][j]
            scan(board)
            board[i][j], board[i + 1][j] = board[i + 1][j], board[i][j]


print(answer)
