class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,vector<int>> mp;
        
        for(auto i:arr){
            int bits = __builtin_popcount(i);
            mp[bits].push_back(i);
        }
        
        vector<int>ans;
        for(auto i:mp){
            vector<int>k = i.second;
            sort(k.begin(),k.end());
            for(auto j:k){
                ans.push_back(j);
            }
        }
        return ans;
    }
};