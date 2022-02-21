class Solution {
public:
    bool pal(string s){
         int n =s.length();
            int l=0,r=n-1;
            while(l<=r){
                if(s[l]!=s[r]){
                    return false;
                    break;
                }
                l++;
                r--;
            }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();i++){
           if(pal(words[i])){
               ans=words[i];
               break;
           }
        }
        return ans;
    }
};