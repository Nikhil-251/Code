class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,curr=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                curr+=1;
            }
            else{
                curr=0;
            }
            if(curr>count){
                count=curr;
            }
        }
        return count;
    }
};