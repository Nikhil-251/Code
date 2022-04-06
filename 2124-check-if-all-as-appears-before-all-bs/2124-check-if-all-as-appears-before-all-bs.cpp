class Solution {
public:
    bool checkString(string s) {
        for(int i=0;i<s.length();i++){
            if(i+1<s.length() && s[i]=='b'){
                if(s[i+1]=='a')
                    return false;
            }
        }
        return true;
    }
};