class Solution {
public:
    string reverseStr(string s, int k) {
        for (int l = 0; l < s.size(); l += 2 * k) {
            int i=l,j=min(l+k-1,(int)s.size()-1);
            while(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};