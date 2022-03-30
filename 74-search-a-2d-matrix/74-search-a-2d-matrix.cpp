class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>v;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++)
                v.push_back(matrix[i][j]);
        }
        for(int i=0;i<v.size();i++)
            if(target==v[i])
                return true;
        return false;
    }
};