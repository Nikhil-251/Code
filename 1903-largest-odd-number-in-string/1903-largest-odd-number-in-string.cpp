class Solution {
public:
    string largestOddNumber(string num) {
        int index=0;
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]%2!=0){
                index=i;
                break;
            }
        }
        if(index==0 && num[0]%2==0){
            return "";
        }
        return num.substr(0,index+1);
    }
};