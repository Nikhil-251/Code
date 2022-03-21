class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        vector<int>sum;
        int i=0;
        // cout<<acc[0].size();
        while(i<acc.size()){
            int temp = 0;
            for(int j=0;j<acc[0].size();j++){
                temp+=acc[i][j];
            }
            // cout<<temp<<endl;
            sum.push_back(temp);
            i++;
        }
        int max=0;
        for(int j=0;j<sum.size();j++){
            if(max<sum[j]){
                max = sum[j];
            }
        }
        return max;
    }
};