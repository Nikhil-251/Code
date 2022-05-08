class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,tens=0;
        for(auto i:bills){
            if(i==5){
                five+=1;
            }
            else if(i==10){
                if(five==0){
                    return false;
                }
                five-=1;
                tens+=1;
            }
            else{
                if(five>0 && tens>0){
                    five-=1;
                    tens-=1;
                }
                else if(five>=3){
                    five-=3;
                }
                else return false;
            }
        }
        return true;
    }
};