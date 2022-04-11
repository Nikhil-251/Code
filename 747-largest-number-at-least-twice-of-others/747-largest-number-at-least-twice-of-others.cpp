class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        long long max = INT_MIN,index=0;
        for(long long i=0;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
                index = i;
            }
        }
        for(long long i=0;i<nums.size();i++){
            if(max==nums[i]){
                continue;
            }
            if((max/2)< nums[i]){
                return -1;
            }
        }
        return index;
    }
};