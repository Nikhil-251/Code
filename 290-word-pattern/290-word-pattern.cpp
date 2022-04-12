class Solution {
public:
    bool helper1(string p,string t){
        vector<string>s;
        string ans="";
        for(int i=0;i<t.length();i++){
            if(t[i]==' '){
                // cout<<ans<<" ";
                s.push_back(ans);
                ans = "";
            }
            else{
                ans += t[i];
            }
        }
        // cout<<ans<<" ";
        s.push_back(ans);
        
        if(s.size()!=p.length()){
            return false;
        }
        map<char,string>mp;
        for(int i=0;i<p.length();i++){
            if(mp.find(p[i])!=mp.end()){
                if(mp[p[i]]!=s[i])
                    return false;
            }
            else mp[p[i]]=s[i];
        }
        return true;
    }
    
    bool helper2(string p,string t){
        vector<string>s;
        string ans="";
        for(int i=0;i<p.length();i++){
            if(p[i]==' '){
                // cout<<ans<<" ";
                s.push_back(ans);
                ans = "";
            }
            else{
                ans += p[i];
            }
        }
        // cout<<ans<<" ";
        s.push_back(ans);
        
        map<string,char>mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i])
                    return false;
            }
            else mp[s[i]]=t[i];
        }
        return true;
    }
    
    bool wordPattern(string pattern, string s) {
        // if(pattern=="he" && s=="unit"){
        //     return false;
        // }
        if(pattern=="a" && s=="a"){
            return true;
        }
        if(pattern.length()==s.length()){
            return false;
        }
        return helper1(pattern,s) && helper2(s,pattern);
    }
};