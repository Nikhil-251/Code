class Solution {
public:
    int reverse(long int x) {
        long int r=0;
        while(x!=0){
            int temp = x%10;
            r = r * 10 + temp;
            x = x/10;
        }
        // cout<<r<<endl;
        if(r>(pow(2,31)-1) || r< (-1 * pow(2,31))){
            return 0;
        }
        return r;
    }
};