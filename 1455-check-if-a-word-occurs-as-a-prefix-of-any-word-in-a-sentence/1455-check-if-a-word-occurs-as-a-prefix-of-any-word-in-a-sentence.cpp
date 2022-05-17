class Solution {
public:
    int isPrefixOfWord(string sen, string sw) {
        sen.push_back(' ');
        int ans=0,count=0;
        string temp="";
        for(int i=0;i<sen.length();i++){
            if(sen[i]==' '){
                count+=1;
                bool q=true;
                int k=0;
                for(int j=0;j<sw.length();j++){
                    if(temp[k]!=sw[j]){
                        q=false;
                        break;
                    }
                    k++;
                }
                if(q){
                    ans=count;
                    break;
                }
                 temp="";
            }
            else{
                temp+=sen[i];
            }
        }
        return ans>0?ans:-1;
    }
};