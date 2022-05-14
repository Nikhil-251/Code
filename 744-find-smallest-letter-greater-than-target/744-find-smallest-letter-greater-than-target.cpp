class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(target>=letters[letters.size()-1]){
            return letters[0];
        }
        char ans;
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target){
                ans=letters[i];
                break;
            }
        }
        return ans;
    }
};