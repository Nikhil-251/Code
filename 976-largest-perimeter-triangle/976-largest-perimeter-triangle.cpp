class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int max =0;
        for(int l=2;l<nums.size();l++){
            if(nums[l-2]<nums[l-1]+nums[l] && nums[l-1]<nums[l-2]+nums[l] && nums[l]<nums[l-2]+nums[l-1]){
                int temp = nums[l-2] + nums[l-1] + nums[l];
                if(max<temp){
                    max = temp;
                }
            }
        }
        return max>0?max:0;
    }
};