class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n%2==0){
            while(n>0){
                int temp = n % 2;
                if(temp!=0 && n>0){
                    return false;
                }
                n >>=1;
                int temp1 = n%2;
                if(temp1!=1 && n>0){
                    return false;
                }
                n>>=1;
            }
        }
        else{
            while(n>0){
                int temp = n % 2;
                if(temp!=1 && n>0){
                    return false;
                }
                n >>=1;
                int temp1 = n%2;
                if(temp1!=0 && n>0){
                    return false;
                }
                n>>=1;
            }
        }
        return true;
    }
};