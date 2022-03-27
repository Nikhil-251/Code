class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s == "a "){
            return 1;
        }
        if(s.length()<=1){
            return s.length();
        }
        int k = s.length()-1,count=0;
        while(k>=0){
            if(s[k]!=' '){
                count++;
            }
            else{
                if(count>0){
                    return count;
                }
            }
            k--;
        }
        return count;
    }
};