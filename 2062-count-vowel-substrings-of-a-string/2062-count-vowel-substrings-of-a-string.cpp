class Solution {
    private:
        bool isVowel(char ch){
            return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
        }
    
        int CountAtMostKVowels(string s,int k){
            int i=0;
            unordered_map<char,int>vowelmap;
            int cnt=0;
            int n = s.size();
            for(int j=0;j<n;j++){
                if(!isVowel(s[j])){
                    vowelmap.clear();
                    i = j+1;
                    continue;
                }
                vowelmap[s[j]]++;
                while(vowelmap.size()>k){
                    vowelmap[s[i]]--;
                    if(vowelmap[s[i]]==0){
                        vowelmap.erase(s[i]);
                    }
                    i++;
                }
                cnt += (j-i+1);
            }
            return cnt;
        }
    public:
        int countVowelSubstrings(string word) {
            return CountAtMostKVowels(word,5)-CountAtMostKVowels(word,4);
        }
};