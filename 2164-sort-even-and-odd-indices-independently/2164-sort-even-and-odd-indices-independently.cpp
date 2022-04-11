class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        priority_queue<int>odd;
        priority_queue<int,vector<int>,greater<int>>even;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even.push(nums[i]);
            }
            else{
                odd.push(nums[i]);
            }
        }
        int i=0,j=1;
        while(!even.empty()){
            nums[i]=even.top();
            even.pop();
            i+=2;
        }
        while(!odd.empty()){
            nums[j] = odd.top();
            odd.pop();
            j+=2;
        }
        return nums;
    }
};