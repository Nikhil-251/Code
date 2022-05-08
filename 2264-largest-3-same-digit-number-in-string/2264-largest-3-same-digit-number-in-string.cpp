class Solution {
public:
    string largestGoodInteger(string num) {
        int ans=0,temp=0;
        string res="";
        for(int i=0;i<num.length()-2;i++){
            // cout<<(num[i]-'0')<<endl;
            temp=(num[i]-'0')*100+(num[i+1]-'0')*10+(num[i+2]-'0');
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                if(temp>ans || ans==0){
                    ans=temp;
                    if(temp==0)
                        res="000";
                    else{
                        res=to_string(temp);
                    }
                }
                }
            }
        if(res=="0"){
            return "000";
        }
        return res;
    }
};