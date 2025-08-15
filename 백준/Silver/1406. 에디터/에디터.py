import sys

input = sys.stdin.readline

line = []
remain = []
n = input().rstrip()
for c in n:
    line.append(c)
cursor = len(line)

m = int(input().rstrip())
for _ in range(m):
    command = input().rstrip().split()
    if command[0] == 'L':
        if cursor == 0:
            continue
        else:
            remain.append(line.pop())
            cursor -= 1
    elif command[0] == 'D':
        if cursor == len(line) + len(remain):
            continue
        else:
            line.append(remain.pop())
            cursor += 1
    elif command[0] == 'B':
        if cursor == 0:
            continue
        else:
            line.pop()
            cursor -= 1
    elif command[0] == 'P':
        line.append(command[1])
        cursor += 1

print(''.join(line + remain[::-1]))