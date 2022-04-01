class Solution {
public:
    string reverseVowels(string s) {
        int l = 0 , r = s.length()-1;
        while(l<=r){
            if((s[l]=='a' || s[l]=='e' || s[l]=='i' || s[l]=='o' || s[l]=='u' || s[l]=='A' || s[l]=='E' || s[l]=='I' || s[l]=='O' || s[l]=='U') && (s[r]=='a' || s[r]=='e' || s[r]=='i' || s[r]=='o' || s[r]=='u' || s[r]=='A' || s[r]=='E' || s[r]=='I' || s[r]=='O' || s[r]=='U')){
                char temp = s[l];
                s[l] = s[r];
                s[r] = temp;
                l+=1;
                r-=1;
            }
            else if(s[l]=='a' || s[l]=='e' || s[l]=='i' || s[l]=='o' || s[l]=='u' || s[l]=='A' || s[l]=='E' || s[l]=='I' || s[l]=='O' || s[l]=='U'){
                r-=1;
            }
            else if(s[r]=='a' || s[r]=='e' || s[r]=='i' || s[r]=='o' || s[r]=='u' || s[r]=='A' || s[r]=='E' || s[r]=='I' || s[r]=='O' || s[r]=='U'){
                l+=1;
            }
            else{
                l+=1;
                r-=1;
            }
        }
        return s;
    }
};