#!/usr/bin/python3

condi = {"number":0,"up":0,"low":0,"spcl":0}
ans = ["number","up","low","spcl"]
n = int(input())
string = input()
count = 0
for i in string:
    if i.islower():
        condi["low"]+=1
    elif i.isupper():
        condi["up"]+=1
    elif i.isalnum():
        condi["number"]+=1
    else:
        condi["spcl"]+=1
for i in ans:
    if(condi[i]==0):
        count+=1
if len(string)>=6:
    print(count)
else:
    if count+n>=6:
        print(count)
    else:
        print(6-n)
