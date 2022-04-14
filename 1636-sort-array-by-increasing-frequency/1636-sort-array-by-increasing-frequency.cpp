class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>p;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            p.push({-i.second,i.first});
        }
        nums.clear();
        while(!p.empty()){
            int x = p.top().first;
            x = abs(x);
            while(x--){
                nums.push_back(p.top().second);
            }
            p.pop();
        }
        return nums;
    }
};