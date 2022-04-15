class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0,temp=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R'){
                temp+=1;
            }
            else if(s[i]=='L'){
                temp-=1;
            }
            if(temp==0){
                count+=1;
            }
        }
        return count;
    }
};