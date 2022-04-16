class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int ec) {
        vector<bool>ans;
        int max =0;
        for(auto i :candies){
            if(max<i){
                max=i;
            }
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+ec>=max){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};