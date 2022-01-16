#!/usr/bin/python3

T  = int(input())
# T = 1

for i in range(T):
	n,x = map(int, input().split())
	li  = list(map(int, input().split()))
	# n,x = 3,15
	# li = [1,5,3]
	li = sorted(li,reverse=True)
	count = 0
	sumi = 0
	for i in range(len(li)):
		if sumi==x or sumi>x:
			# print(count)
			break
		else:
			sumi+=li[i]
			count+=1
	if sumi==x or sumi>x:
		print(count)
	else:
		print("-1")