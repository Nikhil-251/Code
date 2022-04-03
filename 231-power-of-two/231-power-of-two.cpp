class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0){
            return false;
        }
        long int x = n;
        if(!(x & (x-1))){
            return true;
        }
        return false;
    }
};