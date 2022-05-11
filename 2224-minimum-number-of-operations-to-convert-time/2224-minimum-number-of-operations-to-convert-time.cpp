class Solution {
public:
    int convertTime(string current, string correct) {
        auto toMin = [](string &s) { 
            return s[0] * 600 + s[1] * 60 + s[3] * 10 + s[4] ;
        };
        int diff=toMin(correct)-toMin(current);
        int ans=0;
        while(diff>0){
            if(diff>=60){
                ans+=int(diff/60);
                diff%=60;
            }
            else if(diff>=15){
                ans+=int(diff/15);
                diff%=15;
            }
            else if(diff>=5){
                
                ans+=int(diff/5);
                diff%=5;
            }
            else{
                
                ans+=int(diff/1);
                diff%=1;
            }
        }
        return ans;
    }
};