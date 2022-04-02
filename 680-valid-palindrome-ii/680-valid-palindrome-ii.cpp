class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0 , r = s.length()-1;
        while(l<=r){
            if(s[l]!=s[r])
                return ispal(s,l+1,r)||ispal(s,l,r-1);
            l++;
            r--;
        }
        return true;
    }
    
    bool ispal(string s,int start,int end){
        while(start<end){
            if(s[start]!=s[end])
                return false;
            start+=1;
            end-=1;
        }
        return true;
    }
};