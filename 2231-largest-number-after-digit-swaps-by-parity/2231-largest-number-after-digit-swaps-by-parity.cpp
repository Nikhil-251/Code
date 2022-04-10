class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> even,odd;
        
        string s = to_string(num);
        for(int i=0;i<s.length();i++){
            if((s[i]-'0')%2==0){
                even.push(s[i]-'0');
            }
            else{
                odd.push(s[i]-'0');
            }
        }
        
        int ans= 0;
        for(int i=0;i<s.length();i++){
            ans = ans*10;
            int temp = s[i]-'0';
            if(temp%2==0){
                ans += even.top();
                even.pop();
            }
            else{
                ans += odd.top();
                odd.pop();
            }
        }
        return ans;
    }
};