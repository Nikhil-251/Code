// { Driver Code Starts


#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int binarysearch(int arr[],int l,int r,int x){
	    while(l<=r){
	        int mid = l + (r-l)/2;
	        if(arr[mid]>x){
	            r = mid-1;
	        }
	        else if(arr[mid]<x){
	            l = mid+1;
	        }
	        else{
	            return mid;
	        }
	    }
	    return -1;
	}
	
	int count(int arr[], int n, int x) {
	    // code here
	    int index = binarysearch(arr,0,n-1,x);
	    if(index==-1){
	        return 0;
	    }
	    
	    int count=1;
	    int left = index-1;
	    while(left>=0 && arr[left]==x){
	        count+=1;
	        left-=1;
	    }
	    
	    int right = index+1;
	    while(right<n && arr[right]==x){
	        count+=1;
	        right+=1;
	    }
	    return count;
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends