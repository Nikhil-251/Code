class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>ans(k);
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int j=0;
        while(k--){
            int max = INT_MIN,t1=0;
            for(auto i:mp){
                if(max<(i.second)){
                    ans[j] = i.first;
                    t1 = i.first;
                    max = i.second;
                    cout<<i.first<<" "<<i.second<<endl;
                }
            }
            mp.erase(t1);
            j++;
        }
        return ans;
    }
};