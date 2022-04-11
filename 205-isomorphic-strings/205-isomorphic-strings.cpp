class Solution {
public:
    
    bool ishelper(string s,string t){
        map<char,char>mp;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i])
                    return false;
            }
                else mp[s[i]]=t[i];
        }
        return true;
    }
    
    bool isIsomorphic(string s, string t) {
        return ishelper(s,t) && ishelper(t,s);
    }
};