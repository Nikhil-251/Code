class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l=0,r=s.size()-1;
        while(l<r){
            if(isalpha(s[l]) && isalpha(s[r])){
                char temp = s[l];
                s[l]=s[r];
                s[r]=temp;
                l+=1;
                r-=1;
            }
            else if(isalpha(s[l])){
                r-=1;
            }
            else if(isalpha(s[r])){
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