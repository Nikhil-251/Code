class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        stack<char>st;
        for(auto i:s){
            if(i!='-'){
                st.push(i);
            }
        }
        string ans="";
        int curr=0;
        while(!st.empty()){
            ans+=toupper(st.top());
            st.pop();
            curr+=1;
            if(curr==k && !st.empty()){
                ans+='-';
                curr=0;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};