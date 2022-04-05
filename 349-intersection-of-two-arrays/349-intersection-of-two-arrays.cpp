class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1,set2;
        for(int i:nums1){
            set1.insert(i);
        }
        for(int i:nums2){
            set2.insert(i);
        }
        vector<int>ans;
        for(int i:set1){
            if(set2.find(i)!=set2.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};