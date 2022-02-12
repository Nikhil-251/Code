// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
        void sort012(int a[], int n)
        {
            vector<int>temp;
            int zc = 0,oc=0,tc=0;
            for(int i=0;i<n;i++){
                if(a[i]==0)
                  zc+=1;
                else if(a[i]==1)
                  oc+=1;
                else
                  tc+=1;
            }
            while(zc--){
                temp.push_back(0);
            }
            while(oc--){
                temp.push_back(1);
            }
            while(tc--){
                temp.push_back(2);
            }
            for(int i=0;i<n;i++){
                a[i]=temp[i];
            }
        }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends