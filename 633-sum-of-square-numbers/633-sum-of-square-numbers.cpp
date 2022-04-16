class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int low = 0,high = sqrt(c);
        while(low<=high){
            long long int curr = low*low + high*high;
            if(curr==c){
                return true;
            }
            else if(curr<c){
                low+=1;
            }
            else{
                high-=1;
            }
        }
        return false;
    }
};