class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>copy=arr;
        sort(copy.begin(),copy.end());
        int rank=1;
        unordered_map<int,int>mp;
        for(int i=0;i<copy.size();i++){
            if(mp.find(copy[i])==mp.end()){
                mp[copy[i]]=rank+=1;
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=mp[arr[i]]-1;
        }
        return arr;
    }
};