class Solution {
public:

    int findMiddleIndex(vector<int>& arr) {
        int ans = -1;
        vector<int>temp(arr.size());
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum = sum + arr[i];
            temp[i]=sum;
        }
        int total = temp[temp.size()-1];
        for(int i=0;i<arr.size();i++){
            int lsum = temp[i]-arr[i];
            int rsum = total-temp[i];
            if(lsum==rsum){
                 ans = i;
                 break;
             }
            }
    return ans;
    }
};