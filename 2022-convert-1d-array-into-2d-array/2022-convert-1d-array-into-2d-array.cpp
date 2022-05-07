class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& org, int m, int n) {
        vector<vector<int>>res;
        if(m*n!=org.size())
            return res;
        
        for(int i=0;i<m*n;){
            vector<int>temp;
            for(int j=0;j<n;j++){
                temp.push_back(org[i]);
                i++;
            }
            res.push_back(temp);
        }
        return res;
    }
};