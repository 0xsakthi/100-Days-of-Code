class Solution:
    def countSubstrings(self, s: str) -> int:
        substring = []
        for i in range(len(s)):
            for j in range(i,len(s)+1):
                temp = s[i:j]
                if temp!="" and temp==temp[::-1]:
                    substring.append(temp)
        return len(substring)
