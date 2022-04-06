class Solution {
public:
    bool areNumbersAscending(string s) {
        int curr=0,prev=0;
        for(auto c : s){
            if(isdigit(c)){
                curr = curr*10 + (c-'0');
            }
            else if(curr!=0){
                if(curr<=prev){
                    return false;
                }
                prev = curr;
                curr=0;
            }
        }
        return curr==0|| prev<curr;
    }
};