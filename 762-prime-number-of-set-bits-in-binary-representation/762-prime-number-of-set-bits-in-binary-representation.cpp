class Solution {
public:
    bool isprime(int n){
        if(n==1){
            return false;
        }
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    
    int countPrimeSetBits(int left, int right) {
        int count=0,temp;
        for(int i=left;i<=right;i++){
            temp = __builtin_popcount(i);
            if(isprime(temp)){
                count+=1;
            }
        }
        return count;
    }
};