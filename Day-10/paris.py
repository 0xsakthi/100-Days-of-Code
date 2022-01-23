#!/usr/bin/python3

n,k = map(int,input().split())
arr = list(map(int,input().split()))
count = 0

count = 0
dic = dict()
for i in arr:
    dic[i] = i - k
for j in dic:
    if dic[j] in dic:
        count += 1
print(count)
