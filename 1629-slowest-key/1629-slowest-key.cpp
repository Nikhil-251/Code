class Solution {
public:
    char slowestKey(vector<int>& rt, string kp) {
        int ans = rt[0];
        char key = kp[0];
        for(int i=1;i<rt.size();i++){
            int temp = rt[i]-rt[i-1];
            if(temp>ans){
                ans = temp;
                key = kp[i];
            }
            else if(temp==ans){
                key = key-kp[i]>0?key:kp[i];
            }
        }
        return key;
    }
};