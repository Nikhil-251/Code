class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int j=2;j<=num;j++){
            int i=j,sum=0;
            while(i>0){
                int temp = i%10;
                sum += temp;
                i = i/10;
            }
            if(sum%2==0){
                count+=1;
            }
        }
        return count;
    }
};