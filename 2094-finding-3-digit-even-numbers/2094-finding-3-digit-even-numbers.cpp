class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digit) {
        int n=digit.size();
        set<int>s;
        for(int i=0;i<n;i++){
            if(digit[i]==0)
                continue;
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i!=j && j!=k && k!=i){
                        int temp = digit[i]*100 + digit[j]*10 + digit[k];
                        if(temp%2==0){
                            s.insert(temp);
                        }
                    }
                }
            }
        }
        vector<int>ans;
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;
    }
};