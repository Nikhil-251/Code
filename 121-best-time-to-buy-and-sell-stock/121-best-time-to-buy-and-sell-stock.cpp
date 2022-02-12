class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int min = INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(min>prices[i]){
                 min=prices[i];
            }
            int temp_profit = prices[i]-min;
            if(temp_profit>max_profit){
            max_profit=temp_profit;
            }
        }
            return max_profit;
        }
};