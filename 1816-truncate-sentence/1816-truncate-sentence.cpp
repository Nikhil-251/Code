class Solution {
public:
    string truncateSentence(string s, int k) {
        int c=0,ans;
        for(int i=0 ;i<s.length();i++){
            // cout<<s[i]<<endl;
            if(s[i]==' '){
                c+=1;
            }
            
            if(c==k){
                ans=i;
                // cout<<c<<endl<<ans<<endl;
                break;
            }
        }
        return s.substr(0,ans);
    }
};