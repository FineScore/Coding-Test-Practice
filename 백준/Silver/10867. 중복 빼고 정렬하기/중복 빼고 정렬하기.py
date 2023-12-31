num = int(input())
li = map(int, input().split())
li = set(li)
li = list(li)
li.sort()
answer = ""

for i in range(len(li)):
    answer += f"{li[i]} "


print(answer)
