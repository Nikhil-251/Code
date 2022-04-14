class Solution {
public:
    int getLucky(string s, int k) {
        string num="";
        for(int i=0;i<s.length();i++){
            int temp = s[i]-'a'+1;
            num += to_string(temp);
        }
        // cout<<num<<endl;
        int ans=0,sum=0;
        while(k--){
            for(int i=0;i<num.length();i++){
                sum += int(num[i]-'0');
                ans = sum;
            }
            num.erase();
            num = num + to_string(sum);
            sum=0;
        }
        return ans;
    }
};