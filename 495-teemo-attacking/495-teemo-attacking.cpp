class Solution {
public:
    int findPoisonedDuration(vector<int>& time, int duration) {
        int sec=0;
        for(int i=1;i<time.size();i++){
            if((time[i]-time[i-1])>=duration){
                sec+=duration;
            }
            else{
                sec+=time[i]-time[i-1];
            }
        }
        sec+=duration;
        return sec;
    }
};