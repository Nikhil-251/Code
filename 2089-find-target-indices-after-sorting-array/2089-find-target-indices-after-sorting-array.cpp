class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int count=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target){
                count+=1;
            }
            else if(nums[i]==target){
                c+=1;
            }
        }
        vector<int>ans;
        while(c--){
            ans.push_back(count++);
        }
        return ans;
    }
};