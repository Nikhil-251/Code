class Solution {
public:
    int minimumBuckets(string street) {
        int total=0,n=street.size();
        for(int i=0;i<n;i++){
            if(street[i]=='H'){
                if(i-1>=0 && street[i-1]=='B'){
                    continue;
                }
                else if((i+1<n && street[i+1]=='H') || i==n-1){
                    if(i-1>=0 && street[i-1]=='.'){
                        street[i-1]='B';
                        total+=1;
                        continue;
                    }
                    else return -1;
                }
                else if(i+1<n && street[i+1]=='.'){
                    street[i+1]='B';
                    total+=1;
                    continue;
                }
                else return -1;
            }
        }
        return total;
    }
};