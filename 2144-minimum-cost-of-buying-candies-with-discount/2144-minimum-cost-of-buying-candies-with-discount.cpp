class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        if(n==1){
            return cost[0];
        }
        if(n==2){
            return (cost[0]+cost[1]);
        }
        int sum=0;
        sort(cost.begin(),cost.end());
        int i=n-1;
        while(i>=0){
            sum += cost[i] + (i>0?cost[i-1]:0);
            i-=3;
        }
        return sum;
    }
};