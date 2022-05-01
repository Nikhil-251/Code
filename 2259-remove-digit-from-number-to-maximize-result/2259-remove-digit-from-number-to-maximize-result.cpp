class Solution {
public:
    bool cmp(string s1,string s2){
        vector<int>t1,t2;
        for(auto i:s1){
            int temp = int(i);
            t1.push_back(temp);
        }
        for(auto i:s2){
            int temp = int(i);
            t2.push_back(temp);
        }
        for(int i=0;i<t1.size();i++){
            if(t2>t1){
                return true;
            }
        }
        return false;
    }
    string removeDigit(string num, char digit) {
        string ans="",t1="";
        int temp=0;
        for(int i=0;i<num.length();i++){
            if(num[i]==digit){
                t1="";
                for(int j=0;j<num.length();j++){
                    if(j!=i){
                        t1+=num[j];
                    }
                }
                if(ans==""){
                    ans=t1;
                }
                if(cmp(ans,t1)){
                    ans=t1;
                }
            }
        }
        return ans;
    }
};