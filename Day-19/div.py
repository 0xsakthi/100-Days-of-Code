#!/usr/bin/python3

def divi(n):
	i = 1
	check = 0
	ve = 0
	while i<=n and check<=x:
		if n%i==0:
			check+=i
			ve += 1/i 
		i+=1
	return check,ve

for i in range(int(input())):
    x,a,b = map(int,input().split())
    ar = 0
    bha = 1
    while x!=ar and ar<=x:
    	ar,final = divi(bha)
    	bha+=1
    var = ar
    # print(final)
    if ar==x and final == a/b:
    	print(bha-1)
    else:
    	print(-1)