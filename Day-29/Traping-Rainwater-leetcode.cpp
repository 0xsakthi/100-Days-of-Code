//time-limit-exeeded(318/323)test cases passed!
// https://leetcode.com/problems/trapping-rain-water/submissions/
class Solution {
public:
    int leftside(int n,vector<int> v){
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            maxi = max(v[i],maxi);
        }
        return maxi;
    }
    int rightside(int n,vector<int> v){
        int maxi = INT_MIN;
        for(int i=n+1;i<v.size();i++){
            maxi = max(v[i],maxi);
        }
        return maxi;
    }
    int trap(vector<int>& height) {
        int trap = 0;
        for(int i=1;i<height.size()-1;i++){
            if(min(rightside(i,height),leftside(i,height))>0){
                int k = min(rightside(i,height),leftside(i,height))-height[i];
                if(k>0)
                    trap+=k;
            }
        }
        return trap;
    }
};
