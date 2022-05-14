class Solution {
public:
    
    bool isnice(string& s,int i,int j){
        map<int,bool>mp;
        for(int x=i;x<=j;x++){
            mp[s[x]]=true;
        }
        while(i<=j){
            if(s[i]<97){
                if(!mp[s[i]+32])
                    return false;
                }
            else{
                if(!mp[s[i]-32]){
                    return false;
                }
            }
            i++;
        }
        return true;
    }
    
    string longestNiceSubstring(string s) {
        int n = s.length();
        int max = 0;
        string res;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isnice(s,i,j)){
                    if(j-i+1>max){
                        max = j-i+1;
                        res = s.substr(i,j-i+1);
                    }
                }
            }
        }
        return res;
    }
};