class Solution {
public:
    int arrlsum(vector<int>arr,int x){
        int sum=0;
        for(int i=0;i<x;i++){
            sum = sum + arr[i];
        }
    return sum;
    }

    int arrrsum(vector<int>arr,int x){
        int sum=0;
        for(int i=x+1;i<arr.size();i++){
            sum = sum + arr[i];
        }
        return sum;
    }
    int findMiddleIndex(vector<int>& arr) {
        int ans = -1;
        for(int i=0;i<arr.size();i++){
            int lsum = arrlsum(arr,i);
            int rsum = arrrsum(arr,i);
            if(lsum==rsum){
                 ans = i;
                    break;
             }
            }
    return ans;
    }
};