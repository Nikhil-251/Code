class Solution {
public:
    string toGoatLatin(string s) {
        unordered_set<char>vowel={'a','e','o','i','u','A','I','E','O','U'};
        stringstream ss(s);
        string word,result,suffix;
        while(ss>>word){
            suffix+='a';
            if(vowel.find(word[0])==vowel.end())
            {
                word=word.substr(1)+word[0];
            }
            result+=word+"ma"+suffix+' ';
        }
        result.pop_back();
        return result;
    }
};