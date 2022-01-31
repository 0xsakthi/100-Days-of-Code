class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res = {0};
        
        for(int i=1;i<n+1;i++){
            vector<int> ans;
            int temp = i;
            while(temp!=0){
                ans.push_back(temp%2);
                temp = temp/2;
            }
            res.push_back(count(ans.begin(),ans.end(),1));
        }
        return res;
    }
};
