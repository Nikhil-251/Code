class Solution {
public:
    void sortColors(vector<int>& nums) {
        int rc=0,wc=0,bc=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                rc+=1;
            }
            else if(nums[i]==1){
                wc+=1;
            }
            else{
                bc+=1;
            }
        }
        int i=0;
        while(rc--){
            nums[i++] = 0;
        }
        while(wc--){
            nums[i++] = 1;
        }
        while(bc--){
            nums[i++] = 2;
        }
    }
};