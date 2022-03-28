class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int min = INT_MAX;
        int max = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(min>nums[i])
                min = nums[i];
            if(max<nums[i])
                max = nums[i];
        }
        if(min + k > max - k){
            return 0;
        }
        else if(min + k == max - k){
            return 0;
        }
        // else if(min + k < max - k)
        return (max - k)-(min + k); 
    }
};