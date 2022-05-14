class Solution {
public:
    int maxPower(string s) {
        int ans=0,curr=0;
        for(int i=1;i<s.size();i++){
            if(s[i-1]==s[i]){
                curr+=1;
            }
            else{
                curr=0;
            }
            if(curr>ans){
                ans=curr;
            }
        }
        return ans==0?1:ans+1;
    }
};