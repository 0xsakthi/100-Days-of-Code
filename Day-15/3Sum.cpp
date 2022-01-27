class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        if (nums.size()<3){
            return res;
        }
        for(int i=0;i<nums.size()-2;i++){
            if (i==0 || nums[i]!=nums[i-1]){
                int low = i+1,high=nums.size()-1,sum=0-nums[i];
                
                while(low<high){
                    if(nums[low]+nums[high]==sum){
                        vector<int> tmp;
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[low]);
                        tmp.push_back(nums[high]);
                        res.push_back(tmp);
                        
                        while(low<high && nums[low]==nums[low+1])low++;
                        while(low<high && nums[high]==nums[high-1])high--;
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]<sum){
                        low++;
                    }else{
                        high--;
                    }
                        
                    }
                }
            else{
                return res;
            }
            }
    return res;    
    }
    // return res;
    };
