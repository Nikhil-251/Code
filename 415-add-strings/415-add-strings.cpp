class Solution {
public:
    string addStrings(string num1, string num2) {
        int s1 = num1.length()-1;
        int s2 = num2.length()-1;
        string res="";
        int carry=0,i;
        while(s1>=0 || s2>=0 || carry){
            int sum=0;
            if(s1>=0){
                sum +=  num1[s1]-'0';
            }
            if(s2>=0){
                sum +=  num2[s2]-'0';
            }
            sum += carry;
            carry = sum/10;
            i = sum%10;
            res = to_string(i)+ res;
            s1-=1;
            s2-=1;
        }
        return res;
    }
};