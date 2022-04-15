class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key){
                mp[nums[i+1]]++;
            }
        }
        int ans=0,count=0;
        for(auto i:mp){
            if(i.second>count){
                ans=i.first;
                count = i.second;
            }
        }
        return ans;
    }
};