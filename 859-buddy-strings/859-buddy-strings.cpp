class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n = s.length(),m = goal.length();
        if(n!=m){
            return false;
        }
        if(s==goal && set<char>(s.begin(),s.end()).size()<s.size()){
            return true;
        }
        vector<char>diff;
        for(int i=0;i<n;i++){
            if(s[i]!=goal[i]){
                diff.push_back(i);
            }
        }
        return (diff.size()==2 && s[diff[0]]==goal[diff[1]] && s[diff[1]]==goal[diff[0]]);
    }
};