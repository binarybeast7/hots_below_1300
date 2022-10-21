'''

Title - Word Capitalization
link - http://codeforces.com/problemset/problem/281/A

'''
n = input()
ntoli = list(n)
ntoli[0] = ntoli[0].upper()
ans = "".join(ntoli)
print(ans)
