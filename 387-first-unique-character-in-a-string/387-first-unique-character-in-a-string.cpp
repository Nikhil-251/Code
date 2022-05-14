class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int ans=0;
        bool b = false;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1){
                b = true;
                ans=i;
                break;
            }
        }
        if(b==false){
            return -1;
        }
        return ans;
    }
};