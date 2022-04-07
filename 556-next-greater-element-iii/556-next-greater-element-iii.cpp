class Solution {
public:
    int nextGreaterElement(int n) {
        long num = n;
        vector<int>count(10);
        int currem=-1,prevrem=-1;
        while(num>0){
            currem = (int)num%10;
            num = num/10;
            count[currem]+=1;
            if(prevrem>currem){
                int temp = currem+1;
                while(count[temp]==0)temp++;
                count[temp]--;
                num = num * 10 + temp;
                
                for(int i=0;i<10;i++){
                    while(count[i]-->0)
                        num = num*10+i;
                }
                return num>INT_MAX?-1:(int)num;
            }
            prevrem=currem;
        }
        return -1;
    }
};