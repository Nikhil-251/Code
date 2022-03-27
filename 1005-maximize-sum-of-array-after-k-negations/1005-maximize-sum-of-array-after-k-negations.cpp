class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> heap(nums.begin(),nums.end());
        // for(int num:nums){
        //     heap.push(num);
        // }
        while(k--){
            int temp = heap.top();
            heap.pop();
            heap.push(-1 * temp);
        }
        int sum=0;
        while(!heap.empty()){
            sum += heap.top();
            heap.pop();
        }
        return sum;
    }
};