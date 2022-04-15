class Solution {
public:
    int distributeCandies(vector<int>& candy) {
        int n = candy.size();
        int amount = n/2;
        set<int>s;
        for(auto i:candy){
            s.insert(i);
        }
        if(s.size()>=amount){
            return amount;
        }
        else if(s.size()<amount){
            return s.size();
        }
        return 0;
    }
};