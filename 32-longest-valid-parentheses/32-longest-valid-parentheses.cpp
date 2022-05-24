class Solution {
public:
    int longestValidParentheses(string s) {
        stack<pair<char,int>>st;
        int ans=0,curr=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push({'(',i});
            }
            else{
                if(!st.empty() && st.top().first=='('){
                    ans = max(ans,i-st.top().second+1);
                    st.pop();
                    if(!st.empty()){
                        ans = max(ans,i-st.top().second);
                    }
                    else{
                        ans = max(ans,i+1);
                    }
                }
                else{
                    st.push({')',i});
                }
            }
            
        }
        return ans;
    }
};