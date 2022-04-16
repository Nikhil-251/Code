class Solution {
public:
    vector<vector<int>> generate(int row) {
        vector<vector<int>>p(row);
        for(int i=0;i<row;i++){
            p[i].resize(i+1,1);

            for(int j=1;j<i;j++){
                p[i][j] = p[i-1][j]+p[i-1][j-1];
            }

        }
        return p;
    }
};