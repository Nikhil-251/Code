class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            bool q = true;
            int k=0;
            for(int j=0;j<words[i].length();j++){
                // cout<<words[i][j]<<endl;
                if(s[k]!=words[i][j]){
                    q=false;
                    break;
                }
                k++;
            }
            if(q){
                // cout<<words[i]<<endl;
                ans+=1;
            }
        }
        return ans;
    }
};