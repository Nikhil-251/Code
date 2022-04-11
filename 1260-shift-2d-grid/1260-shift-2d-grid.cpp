class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        if(k==0){
            return grid;
        }
        int m = grid.size(),n = grid[0].size();
        k = k%(n*m);
        vector<vector<int>>ans(m,vector<int>(n, 0));
        while(k--){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(i==(m-1) && j==(n-1)){
                        ans[0][0] = grid[i][j];
                    }
                    else if(j==(n-1)){
                        ans[i+1][0] = grid[i][j];
                    }
                    else{
                        ans[i][j+1]=grid[i][j];
                    }
                }
            }
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    grid[i][j]=ans[i][j];
                }
            }
        }
        return grid;
    }
};