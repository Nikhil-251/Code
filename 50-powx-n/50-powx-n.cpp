class Solution {
public:
    double PowUtil(double x, int n){
    if(n==0) return 1;
    if(n==1) return x;
    double value = PowUtil(x,n/2);
    double ans = value*value;
    if(n%2!=0)
      return ans*x;
    else
      return ans;
    }

    double myPow(double x, int n) {
        if(n<0)
            return 1/PowUtil(x,n);
        else
            return PowUtil(x,n);
    }
};