class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr(n);
        vector<int>ans(2);
        for(auto i:nums){
            arr[i-1]+=1;
        }
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==2){
                ans[0]=(i+1);
            }
            if(arr[i]==0){
                ans[1]=(i+1);
            }
        }
        return ans;
    }
};