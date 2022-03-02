class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0,temp;
        for(int i=0;i<words.size();i++){
            temp=0;
            for(int j=0;j<pref.size();j++){
                if(pref[j]!=words[i][j]){
                    break;
                }
                temp+=1;
            }
                if(temp==pref.length()){
                     count+=1;
                }
            }
        return count;
    }
};