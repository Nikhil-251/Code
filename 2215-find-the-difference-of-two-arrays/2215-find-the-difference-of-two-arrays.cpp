class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> num1,num2;
        for(auto i:nums1){
            num1.insert(i);
        }
        for(auto i:nums2){
            num2.insert(i);
        }
        vector<int> n1,n2;
        for(int i : num1){
            if(num2.find(i)==num2.end()){
                n1.push_back(i);
            }
        }
        for(int i : num2){
            if(num1.find(i)==num1.end()){
                n2.push_back(i);
            }
        }
        return vector<vector<int>> {n1,n2};
    }
};