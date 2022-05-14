class Solution {
public:
    string reverseWords(string s) {
        for(int i=0,j=0;i<=s.size();i++){
            if(i==s.size() || s[i]==' '){
                int p=j,q=i-1;
                while(p<q){
                    swap(s[p],s[q]);
                    p++;
                    q--;
                }
                j=i+1;
            }
        }
        return s;
    }
};