class Solution {
public:
    int secondHighest(string s) {
        int max=-1,smax=-1;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                if(max<(s[i]-'0')){
                    smax=max;
                    max=(s[i]-'0');
                }
                else if(max>(s[i]-'0')){
                    if(smax<(s[i]-'0')){
                        smax=(s[i]-'0');
                    }
                }
            }
        }
        return smax;
        
    }
};