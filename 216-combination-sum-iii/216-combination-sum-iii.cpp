class Solution {
public:
    vector<vector<int>>ans;
    void fun(int i, int n, int sum, vector<int>temp){
        if(sum==0){
            if(n==0) ans.push_back(temp);
            return;                        
        }
        if(i>9) return; 
        fun(i+1,n,sum,temp);
        temp.push_back(i);
        fun(i+1,n-1,sum-i,temp); 
        temp.pop_back();
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        fun(1,k,n,{}); 
        return ans;
    }
};