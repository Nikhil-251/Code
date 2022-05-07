class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>v(n+1,0);
        if(n<=1)
            return n;
        
        v[0]=0,v[1]=1;
        int ans=1;
        for(int i=2;i<=n;i++){
            if(i%2==0){
                v[i]=v[i/2];
            }
            else{
                v[i]=v[(i-1)/2]+v[((i-1)/2)+1];
            }
            ans = max(ans,v[i]);
        }
        return ans;
    }
};