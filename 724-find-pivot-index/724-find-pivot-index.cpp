class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans = -1;
        vector<int>temp;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            temp.push_back(sum);
        }
        int total = temp[temp.size()-1];
        for(int i=0;i<nums.size();i++){
            int lsum = temp[i]-nums[i];
            int rsum = total-temp[i];
            if(lsum==rsum){
                ans=i;
                break;
            }
        }
        return ans;
    }
};