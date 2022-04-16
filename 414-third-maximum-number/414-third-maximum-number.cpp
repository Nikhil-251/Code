class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        for(auto i:nums){
            s.insert(i);
        }
        priority_queue<int>pq;
        for(auto i:s){
            pq.push(i);
        }
        if(pq.size()<=2){
            return pq.top();
        }
        else{
            pq.pop();
            pq.pop();
            return pq.top();
        }
    }
};