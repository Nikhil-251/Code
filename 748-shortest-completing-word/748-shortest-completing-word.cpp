class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        
        vector<int> mp(26,0);
        
        for(char ch : licensePlate)
            if(isalpha(ch)) mp[tolower(ch) - 'a']++; 
        
        string ans;
        for(string word : words)
        {
            vector<int> temp = mp;
            for(char ch : word)
                temp[tolower(ch) - 'a']--;
            
            bool q = true;
            for(int i : temp)
                if(i > 0) q = false;
            
            if(q && (ans == "" || word.length() < ans.length()))
                ans = word;
        }
        
        return ans;
    }
};