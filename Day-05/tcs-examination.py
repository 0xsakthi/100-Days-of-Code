#!/usr/bin/python3

T = int(input())

for i in range(T):
	dragon = list(map(int, input().split())) #dsa,toc,dm
	sloth  = list(map(int, input().split()))
	if sum(dragon)>sum(sloth):
		print("DRAGON")
	elif sum(sloth)>sum(dragon):
		print("SLOTH")
	else:
		#dsa-checking-marks-equal
		if dragon[0]>sloth[0]:
			print("DRAGON")
		elif sloth[0]>dragon[0]:
			print("SLOTH")
		else:
			if sloth[1]>dragon[1]:
				print("SLOTH")
			elif sloth[1]<dragon[1]:
				print("DRAGON")
			else:
				print("TIE")