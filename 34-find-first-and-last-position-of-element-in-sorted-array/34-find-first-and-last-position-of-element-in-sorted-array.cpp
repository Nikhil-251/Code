class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int flag=0;
        vector<int>ans(2);
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(flag==0 && nums[i]==target)
            {
                ans[0]=i;
                ans[1]=i;
                flag=1;
                c++;
            }
            else if(flag==1 && nums[i]==target){
                ans[1]=i;
                c++;
            }
        }
        if(c==0){
            ans[0]=-1;
            ans[1]=-1;
            return ans;
        }
        return ans;
    }
};