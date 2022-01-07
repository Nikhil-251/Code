class Solution {
public:
    bool isSameAfterReversals(int num) {
        long long int r1=0,r2=0,temp=num,x=0;
        while(num!=0){
            x = num%10;
            r1 = r1*10 + x;
            num = num/10;
        }
        x = 0;
        while(r1!=0){
            int x = r1%10;
            r2 = r2*10 + x;
            r1 = r1/10;
        }
        if(r2==temp){
            return true;
        }
        else{
            return false;
        }
    }
};
