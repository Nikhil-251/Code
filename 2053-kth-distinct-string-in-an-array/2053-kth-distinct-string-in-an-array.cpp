class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        int temp=0;
        for(auto i:arr){
            mp[i]++;
        }
        
        for(auto i:arr){
            if(mp[i]>1)
                continue;
            temp+=1;
            if(temp==k)
                return i;
        }
        return "";
    }
};