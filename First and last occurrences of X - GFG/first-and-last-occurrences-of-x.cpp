// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        int flag=0;
        vector<int> ans(2);
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(flag==0 && x==arr[i])
            {
                ans[0]=i;
                ans[1]=i;
                flag=1;
                c++;
            }
            else if(flag==1 && x==arr[i])
            {
                ans[1] =i;
                c++;
            }
        }
        
        if(c==0)
        {
            vector<int>res(1);
            res[0]=-1;
            return res;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends