class Solution {
public:
    vector<int> twoSum(vector<int>& num, int k) {
        int l = 0, r=num.size()-1;
        vector<int>ans(2);
        while(l<r){
            if(k>num[l]+num[r]){
                l++;
                continue;
            }
            else if(k<num[l]+num[r]){
                r--;
                continue;
            }
            else{
                ans[0]=l+1;
                ans[1]=r+1;
                return ans;
            }
        }
        return ans;
    }
};