class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        int odd=0;
        for(auto i:mp){
            odd+=i.second&1;
        }
        if(odd>0){
            return s.length()-odd+1;
        }
        else{
            return s.size();
        }
    }
};