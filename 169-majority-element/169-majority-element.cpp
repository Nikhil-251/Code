class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(c==0){
                cand=nums[i];
            }
            if(cand==nums[i]){
                c+=1;
            }
            else{
                c-=1;
            }
        }
        return cand;
        
    }
};