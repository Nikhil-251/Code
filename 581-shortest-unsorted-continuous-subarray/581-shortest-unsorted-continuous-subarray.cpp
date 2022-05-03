class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n= nums.size();
        int l=0,r=-1,min=nums[n-1],max=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<max){
                r=i;
            }
            else{
                max= nums[i];
            }
        }
        for(int j=n-2;j>=0;j--){
            if(nums[j]>min){
                l=j;
            }
            else{
                min = nums[j];
            }
        }
        return r-l+1;
    }
};