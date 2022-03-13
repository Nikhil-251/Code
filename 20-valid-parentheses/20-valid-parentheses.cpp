class Solution {
public:
    bool ispair(char opening, char closing){
        if(opening=='(' and closing==')')
            return true;
        if(opening=='[' and closing==']')
            return true;
        if(opening=='{' and closing=='}')
            return true;
        return false;
    }
    
    bool isValid(string s) {
        int n=s.length();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='[')
                st.push(s[i]);
            else{
                if(st.empty() or !ispair(st.top(),s[i]))
                    return false;
                st.pop();
            }
        }
        return st.empty()?true:false;
    }
};