class Solution:
    
    #Function to reverse words in a given string.
    def reverseWords(self,S):
        S = "."+S
        res = ""
        flag = len(S)
        temp = ""
        for i in range(flag-1,-1,-1):
            temp+=S[i]
            if S[i]==".":
                res+=temp[::-1]
                temp = ""
        return res[1:len(res)]
