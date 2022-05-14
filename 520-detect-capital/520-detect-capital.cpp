class Solution {
public:
    bool detectCapitalUse(string word) {
        bool p = false,q=false;
        
        if(islower(word[0]) && isupper(word[1])){
            return false;
        }
        if(isupper(word[1])){
            p = true;
        }
        else if(islower(word[1])){
            q = true;
        }
        for(int i=2;i<word.size();i++){
            if(p){
                if(!isupper(word[i])){
                    return false;
                }
            }
            else{
                if(!islower(word[i])){
                    return false;
                }
            }
        }
        return true;
    }
};