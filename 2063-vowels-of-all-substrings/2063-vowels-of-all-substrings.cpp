class Solution {
private:
    bool isvowel(char ch){
        return ch=='a' || ch=='e'|| ch == 'i' || ch=='o' || ch=='u';
    }
public:
    long long countVowels(string word) {
        long long n = word.size();
        long long ans = 0;
        for(long long i=0;i<n;i++){
            if(isvowel(word[i]))
                ans += (i+1) * (n-i);
        }
        return ans;
    }
};