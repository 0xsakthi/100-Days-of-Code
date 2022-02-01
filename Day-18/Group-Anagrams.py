import collections
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = collections.defaultdict(list)
        for i in strs:
            count = [0]*26
            for j in i:
                count[ord(j)-97]+=1
            res[tuple(count)].append(i)
        return list(res.values())
