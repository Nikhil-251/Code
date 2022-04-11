class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int ec=0,oc=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                ans[ec]=nums[i];
                ec+=2;
            }
            else
            {
                ans[oc]=nums[i];
                oc+=2;
            }
        }
        return ans;
    }
};