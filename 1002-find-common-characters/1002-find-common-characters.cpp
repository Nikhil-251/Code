class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size(), n2;
        int i, j, k = 0;
        vector<unordered_map<char, int> > mp(n);
        
        for (i = 0; i < n; i++) {
            n2 = words[i].length();
            for (j = 0; j < n2; j++) {
                if (i == 0)
                    k++; 
                mp[i][words[i][j]] += 1;
            }
        }
        
        for (i = 1; i < n; i++) {
            for (auto x : mp[0]) {
                if (mp[i][x.first] < x.second) {
                    k -= (x.second - mp[i][x.first]);
                    mp[0][x.first] = mp[i][x.first];
                }
            }
        }
        vector<string> ans(k);
        
        for (auto x : mp[0]) {
            if (x.second > 0) {
                for (i = 0; i < x.second; i++) {
                    ans[k - 1] = x.first;
                    k--;
                }
            }
        } 
        return ans;
    }
};