class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int num=tickets[k],tt=0;
        for(int i=0;i<tickets.size();i++){
            if(num>tickets[i]){
                tt+=tickets[i];
            }
            else if(num<=tickets[i]){
                tt+=num;
            }
        }
        for(int i=k+1;i<tickets.size();i++){
            if(tickets[i]>=num){
                tt-=1;
            }
        }
        return tt;
    }
};