class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int sm=INT_MIN;
        stack<int>st;
        for(int i=nums.size()-1;i>=0;i--){
            if(sm>nums[i])
                return true;
            while(not(st.empty()) && st.top()<nums[i]){
                sm=max(st.top(),sm);
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};