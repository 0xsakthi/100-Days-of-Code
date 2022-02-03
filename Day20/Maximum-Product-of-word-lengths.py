class Solution:
    def maxProduct(self, words: List[str]) -> int:
        def check(s1,s2):
            for i in s1:
                for j in s2:
                    if i==j:
                        return False
            return True
        ans = []
        maxi = 0
        for i in words:
	        for j in words:
		        if check(i,j):
			        maxi = max(len(i)*len(j),maxi)
        return maxi
