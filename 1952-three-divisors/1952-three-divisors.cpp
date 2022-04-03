class Solution {
public:
    bool isThree(int n) {
        int i=2,count=2;
        while(i<n){
            if(n%i==0){
                count+=1;
            }
            i+=1;
        }
        if(count==3)
            return true;
        return false;
    }
};