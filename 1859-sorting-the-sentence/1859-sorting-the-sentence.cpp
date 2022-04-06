class Solution {
public:
    string sortSentence(string s) {
        string word;
        vector<string> v(10);
        for(int i=0;i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                v[s[i]-'0'] = word +" ";
                word = "";
                i+=1;
            }
            else{
                word+=s[i];
            }
        }
        
        string ans="";
        for(auto x:v){
            ans += x;
        }
        ans.pop_back();
        return ans;
    }
};