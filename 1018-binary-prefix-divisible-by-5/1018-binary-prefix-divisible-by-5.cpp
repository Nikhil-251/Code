class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        string s="";
        vector<bool>ans;
        int dec=0;
        for(int i=0;i<nums.size();i++){
            dec = dec * 2 + nums[i];
            if(dec%5==0){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
            dec= dec%5;
        }
        return ans;
    }
};