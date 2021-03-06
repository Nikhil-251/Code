class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }
            st.push(nums[i]);
        }
        
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }
            ans[i] = (st.size()==0) ? -1:st.top();
            st.push(nums[i]);
        }
        return ans;
    }
};