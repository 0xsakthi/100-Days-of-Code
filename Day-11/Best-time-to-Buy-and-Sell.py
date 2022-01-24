# "You are given an array prices where prices[i] is the price of a given stock on the ith day.
# You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
# Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0"

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        left,right = 0,1
        maxprofit = 0
        while(right<=len(prices)-1):
            if prices[left]<prices[right]:
                maxprofit = max(prices[right]-prices[left],maxprofit)
            else:
                left=right
            right+=1
        return maxprofit
