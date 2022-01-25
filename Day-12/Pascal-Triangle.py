class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res = [[1]]
        for i in range(numRows-1):
            temp = [0]+res[-1]+[0]
            arr = []
            for j in range(len(temp)-1):
                arr.append(temp[j]+temp[j+1])
            res.append(arr)
        return res
