class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        while(left<=right){
            if(nums[left]==target || nums[right]==target){
                return true;
            }
            else if(nums[left]<target){
                while(left<right && nums[left+1]==nums[left]){
                    left+=1;
                }
                left+=1;
            }
            else if(nums[right]>target){
                while(left<right && nums[right-1]==nums[right]){
                    right-=1;
                }
                right-=1;
            }
            else{
                break;
            }
        }
        return false;
    }
};