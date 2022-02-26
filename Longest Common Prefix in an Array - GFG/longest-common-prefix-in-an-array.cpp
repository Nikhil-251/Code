// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    bool checkChar(string arr[], int c, char s, int N){
       for(int i =0; i<N; i++){
           string tmp = arr[i];
           if(tmp[c] != s){
               return false;
           }
       }
       return true;
    }
    string longestCommonPrefix (string arr[], int N)
    {
        int len = arr[0].length();
       string first = arr[0];
       string res;
       for(int i=0; i<len; i++){
           if(checkChar(arr, i, first[i], N)){
               res += first[i];
           }else{
               break;
           }
       }
       if(res != ""){
           return res;
       }
       else{
           return "-1";
       }
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends