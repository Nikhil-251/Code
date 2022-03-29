class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>ans;
        int i=0;
        while(i<nums.size()){
            ans[nums[i]]+=1;
            i+=1;
        }
        for(auto x:ans){
            if(x.second>1){
                return x.first;
            }
        }
        return 0;
    }
};