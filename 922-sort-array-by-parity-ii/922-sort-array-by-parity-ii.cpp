class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        priority_queue<int>even,odd;
        for(auto i:nums){
            if(i%2==0){
                even.push(i);
            }
            else{
                odd.push(i);
            }
        }
        int i=0,n = (nums.size()/2);
        while(!even.empty()){
            nums[i] = even.top();
            cout<<nums[i]<<" ";
            even.pop();
            i+=2;
        }
        int j=1;
        while(!odd.empty()){
            nums[j] = odd.top();
            cout<<nums[j]<<" ";
            odd.pop();
            j+=2;
        }
        return nums;
    }
};