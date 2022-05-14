class Solution {
public:
    string toHex(int num) {
        u_int n = num;
        if(num==0)
            return "0";
        string ans="";
        if(n>0){
            while(n){
                int temp = n%16;
                n/=16;
                if(temp>=10){
                    ans=(char)('a'+temp-10)+ans;
                }
                else{
                    ans = (char)('0'+temp)+ans;
                }
            }
        }
        return ans;
    }
};