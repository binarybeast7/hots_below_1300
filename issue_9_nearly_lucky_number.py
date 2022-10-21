'''

Title - Nearly Lucky Number
link - http://codeforces.com/problemset/problem/110/A

'''

N = int(input())
s = str(N)
p = 0
p1 = 0
n = 0
for i in range (len(s)):
	if (s[i] == '4' ) :
		p += 1
	elif (s[i] == '7') :
		p += 1
	else :
		n += 1
		
if (p == 4 or p == 7) :
	print("YES")
else :
	print ("NO")
