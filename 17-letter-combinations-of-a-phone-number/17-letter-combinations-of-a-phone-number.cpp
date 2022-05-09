class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> v;
        v.push_back("abc");
        v.push_back("def");
        v.push_back("ghi");
        v.push_back("jkl");
        v.push_back("mno");
        v.push_back("pqrs");
        v.push_back("tuv");
        v.push_back("wxyz");
        
        
        vector<string> s1;
        vector<string> s2;
        
        s1.push_back("");
        if(digits == "") return s2;
        
        for(int i=0; i < digits.length(); i++){
            for(int j = 0 ; j < v[digits[i]-50].length() ; ++j)
                for(int k = 0; k < s1.size() ; k++)
                    s2.push_back(s1[k]+v[digits[i]-50][j]);
            s1 = s2;
            s2 = {};
        }

        return s1;
    }
};