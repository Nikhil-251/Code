class Solution {
public:
    int divide(int div, int dis) {
        long g=((long)div/(long)dis);
        cout<<g<<endl;
        if(g>2147483647)
        {
            return 2147483647;
        }
        else if(g<-2147483648)
        {
            return -2147483648;
        }
        else
        {
            return (int)g;
        }
    }
};