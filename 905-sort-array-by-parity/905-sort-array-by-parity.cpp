class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        priority_queue<int>even,odd;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push(nums[i]);
            }
            else{
                odd.push(nums[i]);
            }
        }
        int i=0;
        while(!even.empty()){
            nums[i] = even.top();
            even.pop();
            i+=1;
        }
        while(!odd.empty()){
            nums[i] = odd.top();
            odd.pop();
            i+=1;
        }
        return nums;
    }
};