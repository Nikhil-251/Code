class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max=INT_MIN,ans=0;
        for(int i=0;i<arr.size();i++){
            if(max<arr[i]){
                max=arr[i];
                ans=i;
            }
        }
        return ans;
    }
};