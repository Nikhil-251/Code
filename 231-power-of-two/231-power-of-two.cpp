class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int i=1;
        while(i<=n){
            if(i==n){
                return true;
            }
            i = i * 2;
        }
        return false;
    }
};