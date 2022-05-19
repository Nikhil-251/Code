class Solution {
public:
    int N,M;
    vector<vector<int>>dp;
    int dfs(int x,int y,vector<vector<int>>& matrix){
        if(dp[x][y]){
            return dp[x][y];
        }
        vector<vector<int>>dir={{-1,0},{1,0},{0,1},{0,-1}};
        int ans=1;
        for(int i=0;i<4;i++){
            int p = x + dir[i][0];
            int q = y + dir[i][1];
            if(p<0 || p>=N || q<0 || q>=M){
                continue;
            }
            if(matrix[x][y]>=matrix[p][q]){
                continue;
            }
            else{
                ans = max(ans,1+dfs(p,q,matrix));
            }
        }
        return dp[x][y]=ans;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = matrix.size(),m = matrix[0].size();
        if(n==0){
            return 0;
        }
        N = n;M=m;
        int ans=0;
        dp = vector<vector<int>>(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans = max(ans,dfs(i,j,matrix));
            }
        }
        return ans;
    }
};