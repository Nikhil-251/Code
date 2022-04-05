class Solution {
public:
    int maxArea(vector<int>& arr) {
        int left =0;
        int right = arr.size()-1;
        int ans=0;
        while(left<=right){
            ans = max(min(arr[left],arr[right])*(right-left),ans);
            if(arr[left]<arr[right]){
                left++;
            }
            else{
                right-=1;
            }
        }
        return ans;
    }
};