class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        set<vector<int>>s;
        vector<int>v;
        for(auto i:pieces){
            s.insert(i);
        }
        for(auto i:arr){
            v.push_back(i);
            if(s.count(v)){
                v.clear();
            }
        }
        return v.size()==0;
    }
};