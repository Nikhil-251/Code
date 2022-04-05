class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return helper(nums,0,0);
    }
    int helper(vector<int>nums,int level, int currentxor){
        if(level==nums.size()){
            return currentxor;
        }
        int inc = helper(nums,level+1,currentxor^nums[level]);
        int exc = helper(nums,level+1,currentxor);
        return inc + exc;
    }
};