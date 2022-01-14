import math
class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        dc = dict()
        for i in nums:
            if i in dc:
                dc[i]+=1
            else:
                dc[i]=1
        a = list(dc.values())
        count =0
        for i in a:
            count+=math.comb(i,2)
        return count
