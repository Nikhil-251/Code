class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int min = INT_MAX;
        for(int i=0;i<n-1;i++){
            if(min>arr[i+1]-arr[i]){
                min=arr[i+1]-arr[i];
            }
        }
        
        vector<vector<int>>ans;
        for(int i=0;i<n-1;i++){
            if((arr[i+1]-arr[i])==min){
                vector<int>t1;
                t1.push_back(arr[i]);
                t1.push_back(arr[i+1]);
                ans.push_back(t1);
            }
        }
        return ans;
    }
};