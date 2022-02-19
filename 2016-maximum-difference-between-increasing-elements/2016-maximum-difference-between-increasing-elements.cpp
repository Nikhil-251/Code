class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff = nums[1]-nums[0];
        int curr_sum = diff;
        int max_sum = curr_sum;
        for(int i=1; i<nums.size()-1; i++)
        {
        
        diff = nums[i+1]-nums[i];
        
        if (curr_sum > 0)
            curr_sum += diff;
        else
            curr_sum = diff;
        
        if (curr_sum > max_sum)
            max_sum = curr_sum;
        }
        if(max_sum<=0){
           max_sum=-1;
        }
        return max_sum;
    }
};