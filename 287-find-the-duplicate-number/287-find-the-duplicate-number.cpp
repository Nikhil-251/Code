class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n+1,0);
        for(auto x:nums){
            ans[x]+=1;
            if(ans[x]>1){
                return x;
            }
        }
        return 0;
    }
};