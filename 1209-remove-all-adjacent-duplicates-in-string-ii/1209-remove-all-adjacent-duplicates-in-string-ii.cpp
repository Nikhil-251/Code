class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        st.push({'*',0});
        for(int i = 0;i<s.length();i++){
            if(st.empty() || st.top().first!=s[i]){
                st.push({s[i],1});
            }
            else{
                if(++st.top().second==k){
                    st.pop();
                }
            }
        }
        string res;
        while(!st.empty()){
            res += string(st.top().second,st.top().first);
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};