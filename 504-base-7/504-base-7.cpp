class Solution {
public:
    string conv(int num){
        string result="";
        while(num>0){
            result = to_string(num%7)+ result;
            num = num / 7;
        }
            
          return result; 
    }
    string convertToBase7(int num) {
        if(num==0)
            return "0";
        if(num<0){
            return "-" + conv(-num);
        }
        return conv(num);
    }
};