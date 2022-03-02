class Solution {
public:
    char findTheDifference(string s, string t) {
        char q = s[0];
        for(int i=1;i<s.length();i++){
            q ^= s[i];
        }
        for(int i=0;i<t.length();i++){
            q ^= t[i];
        }
        return q;
    }
};