class Solution {
public:
    int min(int a,int b){
        return a<b?a:b;
    }
    int distributeCandies(vector<int>& candy) {
        int n = candy.size();
        int amount = n/2;
        unordered_set<int>s;
        for(auto i:candy){
            s.insert(i);
        }
        return min(s.size(),amount);
    }
};