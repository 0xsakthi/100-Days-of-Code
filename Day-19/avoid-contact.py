#!/usr/bin/python3

for i in range(int(input())):
	n,c = map(int,input().split())
	if n==c:
		print((n+c)-1)
	else:
		print(n+c)
    
