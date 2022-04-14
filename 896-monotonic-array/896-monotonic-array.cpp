class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool in=true,d=true;
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]<nums[i+1]){
                    d = false;
                }
                if(nums[i]>nums[i+1]){
                    in = false;
                }
            }
        return in || d;
    }
};