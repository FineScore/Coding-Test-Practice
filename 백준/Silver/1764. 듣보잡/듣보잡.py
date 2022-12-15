import sys

no = list(map(int, sys.stdin.readline().rstrip().split()))
no_listen_people = set([sys.stdin.readline().rstrip() for _ in range(no[0])])
no_look_people = set([sys.stdin.readline().rstrip() for _ in range(no[1])])
no_twice = sorted(no_listen_people & no_look_people)

print(len(no_twice))
for i in range(len(no_twice)):
    print(no_twice[i])
