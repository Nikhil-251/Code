class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        map<int,int> arr1;
        map<int,int> arr2;
        map<int,int> dup;
        for(int i=0;i<n;i++){
            arr1[tops[i]]++;
            arr2[bottoms[i]]++;
            if(tops[i]==bottoms[i]){
                dup[tops[i]]++;
            }
        }
        for(int i=1;i<=6;i++){
            int temp = arr1[i]+ arr2[i] - dup[i];
            if(temp==n){
                return n - max(arr1[i],arr2[i]);
            }
        }
        return -1;
    }
};