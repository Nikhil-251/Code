class Solution {
public:
    int lengthOfLastWord(string s) {
        
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