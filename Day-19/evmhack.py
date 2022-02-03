#!/usr/bin/python3

for i in range(int(input())):
	a,b,c,p,q,r = map(int,input().split())
	ans1 = max(p,q,r)
	ans2 = min(a,b,c)
	check1 = (((a+b+c)-ans2)+ans1)
	check2 = ((p+q+r)/2)
	# print(check1)
	# print(check2)
	if check1<check2:
		print("NO")
	elif a+b+c == p+q+r:
		print("NO")
	else:
		print("YES")