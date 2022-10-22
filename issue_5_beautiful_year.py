'''

title - Beautiful Year
link - http://codeforces.com/problemset/problem/271/A

'''

N = int(input())
ans = N
while True :
    ans += 1
    s = set(str(ans))
    if (len(s) == len(str(ans))):
        break
print(ans)
