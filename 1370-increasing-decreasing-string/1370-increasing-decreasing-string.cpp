class Solution {
public:
    string sortString(string s) {
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        string ans="";
        while(ans.size()<s.size()){
            for(char i='a';i<='z';i++){
                if(mp[i]>0){
                    ans+=i;
                    mp[i]--;
                }
            }
            for(char i='z';i>='a';i--){
                if(mp[i]>0){
                    ans+=i;
                    mp[i]--;
                }
            }
        }
        return ans;
    }
};