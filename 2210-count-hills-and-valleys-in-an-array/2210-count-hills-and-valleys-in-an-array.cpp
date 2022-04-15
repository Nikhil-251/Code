class Solution {
public:
    int countHillValley(vector<int>& nums) {
        auto r = unique(nums.begin(),nums.end());
        nums.resize(distance(nums.begin(),r));
        int count=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                count+=1;
            }
            else if(nums[i]<nums[i-1] && nums[i]<nums[i+1]){
                count+=1;
            }
        }
        return count;
    }
};