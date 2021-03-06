class Solution {
public:
    vector<int> getRow(int row) {
        vector<vector<int>>p(row+1);
        
        for(int i=0;i<row+1;i++){
            p[i].resize(i+1,1);
            for(int j=1;j<i;j++){
                p[i][j] = p[i-1][j-1] + p[i-1][j];
            }
        }
        return p[row];
    }
};