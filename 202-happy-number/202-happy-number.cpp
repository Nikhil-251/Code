class Solution {
public:
    int sumofpair(int n){
        int sum=0;
        while(n){
            int temp = (n%10)*(n%10);
            sum += temp; 
            n = n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        while(n>6){
            n = sumofpair(n);
        }
        if(n==1){
            return true;
        }
        return false;
    }
};