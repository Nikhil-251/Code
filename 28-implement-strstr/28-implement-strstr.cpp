class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length(),m = needle.length();
        if(needle=="" && haystack==""){
            return 0;
        }
        if(needle==""){
            return 0;
        }
        if(haystack==""){
            return -1;
        }
        for(int i=0;i<n-m+1;i++){
            int j;
            for(j=0;j<m;j++){
                if(haystack[i+j]!=needle[j]){
                    break;
                }
            }
            if(j==m){
                return i;
            }
        }
        return -1;
    }
};