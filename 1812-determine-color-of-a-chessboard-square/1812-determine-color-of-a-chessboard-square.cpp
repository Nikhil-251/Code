class Solution {
public:
    bool squareIsWhite(string cd) {
        if(cd[0]=='a' || cd[0]=='c' || cd[0]=='e' || cd[0]=='g'){
            int temp = cd[1]-'0';
            if(temp%2==0){
                return true;
            }
            else{
                return false;
            }
        }
        if(cd[0]=='b' || cd[0]=='d' || cd[0]=='f' || cd[0]=='h'){
            int temp = cd[1]-'0';
            if(temp%2==0){
                return false;
            }
            else{
                return true;
            }
        }
        return true;
    }
};