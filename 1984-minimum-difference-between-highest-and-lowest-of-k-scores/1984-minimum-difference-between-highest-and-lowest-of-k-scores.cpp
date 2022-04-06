class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int mindiff=INT_MAX;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i+k-1<n;i++){
            if((nums[i+k-1]-nums[i])<mindiff){
                mindiff = nums[i+k-1] - nums[i];
            }
        }
        return mindiff;
    }
};