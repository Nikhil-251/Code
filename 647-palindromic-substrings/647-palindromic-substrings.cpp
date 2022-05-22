class Solution {
public:
    bool ispal(string temp){
        int l = 0,r=temp.length()-1;
        while(l<=r){
            if(temp[l]!=temp[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            string temp = "";
            temp+=s[i];
            if(ispal(temp)){
                count+=1;
            }
            for(int j=i+1;j<s.length();j++){
                temp+=s[j];
                if(ispal(temp)){
                    count+=1;
                }
            }
        }
        return count;
    }
};