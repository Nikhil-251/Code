class Solution {
public:
    // int min(int a,int b){
    //     int ans = a<b?a:b;
    //     return ans;
    // }
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans =0;
        for(int i=0;i<nums.size();i+=2){
            ans += min(nums[i], nums[i+1]);
        }
        return ans;
    }
};