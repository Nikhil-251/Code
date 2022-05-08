class Solution {
public:
    int uniqueLetterString(string s) {
    long long int ans=0;
        if(s=="" || s.length()==0){
            return ans;
        }
        vector<long long int>showlastpos(128),contribution(128);
        long long int cur=0;
        for(int i=0;i<s.length();i++){
            char x = s[i];
            cur-=contribution[x];
            contribution[x] = (i-(showlastpos[x]-1));
            cur+=contribution[x];
            showlastpos[x]=i+1;
            ans+=cur;
        }
        return ans;
    }
};