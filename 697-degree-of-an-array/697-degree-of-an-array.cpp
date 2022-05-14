class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int deg = 0,n=0;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto i:mp){
            if(i.second.size()>deg){
                deg = i.second.size();
            }
        }
        int ans=nums.size();
        for(auto i:mp){
            if(i.second.size()==deg){
                ans = min(ans,i.second.back()-i.second[0]+1);
            }
        }
        return ans;
    }
};