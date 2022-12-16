import sys

site, search_pw = map(int, sys.stdin.readline().rstrip().split())
pw_dict = {}

for _ in range(site):
    url, pw = map(str, sys.stdin.readline().rstrip().split())
    pw_dict[url] = pw

for _ in range(search_pw):
    search_url = sys.stdin.readline().rstrip()
    print(pw_dict[search_url])
