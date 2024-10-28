n = int(input())
s = list(map(int, input().split()))


s.sort(reverse=True)

size = s[0] + s[1]
score = s[0] * s[1]



for i in range(2, len(s)):
    score = score + (size * s[i])
    size = size + s[i]

print(score)