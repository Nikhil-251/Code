class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans(n,-1);
        if(n==1){
            return ans;
        }
        stack<int>st;
        for(int i=n-2;i>=0;i--){
            if(st.empty()){
                st.push(arr[i+1]);
                ans[i] = st.top();
            }
            else if(!st.empty()){
                if(st.top()<arr[i+1]){
                    st.push(arr[i+1]);
                }
                ans[i] = st.top();
            }
        }
        
        return ans;
    }
};