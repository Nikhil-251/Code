class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int index=0;
        bool q =false;
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]%2!=0){
                index=i;
                q=true;
                break;
            }
        }
        if(q==false){
            return ans;
        }
        return num.substr(0,index+1);
    }
};