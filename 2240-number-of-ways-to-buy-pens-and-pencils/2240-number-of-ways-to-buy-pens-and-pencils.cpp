class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ans =0,val=0;
        for(int i=0;;i++){
            val = total-cost1*i;
            if(val<0)
                break;
            ans+= (long)floor((long)val/(long)cost2)+1;
        }
        return ans;
    }
};