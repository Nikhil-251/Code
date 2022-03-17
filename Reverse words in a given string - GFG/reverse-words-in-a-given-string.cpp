// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here
        s = s + ".";
        string ans;
        int start=0,c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='.'){
                string p = s.substr(start,c);
                //cout<<p<<endl;
                ans = p + "." + ans;
                while(s[i]=='.'){
                    i++;
                }
                start = i;
                c=1;
            }
            else{
                c++;
            }
        }
        ans.erase(ans.length()-1);
        return ans;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends