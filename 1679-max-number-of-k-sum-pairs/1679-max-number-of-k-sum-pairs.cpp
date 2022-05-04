class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]+=1;
        }
        int ans=0;
        for(auto i:nums){
            if((k-i)==i){
                if(mp[i]>1){
                    ans+=1;
                    mp[i]-=2;
                }
            }
            else if(mp[i]>0 && mp[k-i]>0){
                ans+=1;
                mp[k-i]--;
                mp[i]--;
            }
        }
        return ans;
    }
};