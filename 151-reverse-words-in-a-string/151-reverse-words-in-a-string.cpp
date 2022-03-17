class Solution {
public:
    string reverseWords(string s) {
        s = s + " ";
        string ans;
        int start=0,c=0,i=0;
        for(i;i<s.length();i++){
            if(s[i]==' '){
                string p = s.substr(start,c);
                //cout<<p<<endl;
                ans = p + " " + ans;
                while(s[i]==' '){
                    i++;
                }
                start = i;
                c=1;
            }
            else{
                c++;
            }
        }
        int n = ans.length();
        while(ans[n-1]==' '){
            ans.erase(n-1);
            n--;
        }
        // ans.erase(ans.length()-1);
        return ans;
    }
};