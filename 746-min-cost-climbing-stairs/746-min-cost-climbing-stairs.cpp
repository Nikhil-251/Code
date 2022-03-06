#include<bits/stdc++.h>
class Solution {
public:
    int min(int a,int b){
        return a<b?a:b;
    }
    
    int check(vector<int>& cost){
        int count=0;
        for(int i=0;i<cost.size();i++){
            if(cost[i]==0){
                count+=1;
            }
        }
        if(count==cost.size()){
            return true;
        }
        return false;
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        vector<int>dp(n+1,0);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i=2;i<n;i++){
            dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-2],dp[n-1]);
    }
};