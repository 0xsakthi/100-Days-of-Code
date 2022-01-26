#!/usr/bin/python3

for i in range(int(input())):
    size,check = map(int,input().split())
    n = list(map(int,input().split()))
    count = 0
    for i in n:
        if i<=0:
            count+=1
    if count>=check:
        print("NO")
    else:
        print("YES")
