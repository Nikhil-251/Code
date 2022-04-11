class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        while(1){
            int temp=original;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==original){
                    original *= 2; 
                }
            }
            if(temp==original){
                return original;
            }
        }
    }
};