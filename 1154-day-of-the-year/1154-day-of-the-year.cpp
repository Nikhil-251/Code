class Solution {
public:
    bool isleapyear(int y){
        if(y%4==0){
            if(y%100==0){
                if(y%400==0)
                    return true;
            }
            else{
                return true;
            }
        }
        return false;
    }
    int dayOfYear(string date) {
        int normal[13] = {0,31,59,90,120,151,181,212,243,273,304,334,365};
        int leap[13]={0,31,60,91,121,152,182,213,244,274,305,335,366};
        int year = ((date[0]-'0')*1000)+((date[1]-'0')*100)+((date[2]-'0')*10)+(date[3]-'0');
        int month= (date[5]-'0')*10+(date[6]-'0');
        int day= (date[8]-'0')*10+(date[9]-'0');
        int ans;
        if(isleapyear(year)){
            ans = leap[month-1]+day;
        }
        else{
            ans = normal[month-1]+day;
        }
        return ans;
    }
};