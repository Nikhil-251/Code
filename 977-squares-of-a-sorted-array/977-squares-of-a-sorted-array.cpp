class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int left = 0,right=n-1;
        for(int index=n-1;index>=0;index--){
            if(abs(nums[left])>abs(nums[right])){
                ans[index] = nums[left]*nums[left];
                left+=1;
            }
            else{
                ans[index] = nums[right]*nums[right];
                right-=1;
            }
        }
        return ans;
    }
};