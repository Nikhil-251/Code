class Solution {
public:
    

    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> v;
        for(int j = 0 ; j< col ; j++){
             vector<int> subV;
            for(int i=0; i<row; i++){
                subV.push_back(matrix[i][j]);
            }
            v.push_back(subV);
        }
        return v;
    }
};